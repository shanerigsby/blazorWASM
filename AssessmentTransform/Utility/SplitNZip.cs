using System.IO.Compression;
using System.Xml;

namespace AssessmentTransform.Utility
{
    internal class SplitNZip
    {
        private const string _xpath = "/assessmentSubmissions/assessmentSubmission";
        private const string _savePath = @"xmlSave";
        private string _zipOutput = $"AssessmentXml_{DateTime.Now.ToString("yyyy-MM-dd__HH_mm")}.zip";
        private static XmlDocument _xmlDoc = new();
        private List<XmlDocument> _nodeDocs = new();
        public string? DownloadableZipPath { get; private set; }

        internal SplitNZip(XmlDocument xmlDoc) 
        {
            _xmlDoc = xmlDoc;

            if (!Directory.Exists(_savePath))
                Directory.CreateDirectory(_savePath);

            var dir = new DirectoryInfo(_savePath);
            foreach (var file in dir.GetFiles())
                file.Delete();
        }
        internal int SplitNodes()
        {
            int count = 0;
            try
            {
                var nodeList = _xmlDoc.SelectNodes(_xpath);
                foreach (XmlNode node in nodeList)
                {
                    var doc = new XmlDocument();
                    doc.LoadXml(node.OuterXml);
                    doc.CreateXmlDeclaration("1.0", "UTF-8", null);
                    _nodeDocs.Add(doc);
                    count++;
                }
            }
            catch(Exception ex)
            {
                Console.WriteLine($"Problem splitting nodes: {ex.Message}");
            }

            return count;
        }

        internal void CreateZip()
        {
            try
            {
                foreach (var nodeDoc in _nodeDocs)
                {
                    var fileName = CreateFileName(nodeDoc);
                    File.WriteAllText(Path.Combine(_savePath, fileName), nodeDoc.OuterXml);
                }

                var tmpFileName = $"{Guid.NewGuid()}.zip";
                ZipFile.CreateFromDirectory(_savePath, tmpFileName);
                File.Move(tmpFileName, _zipOutput, true);
                Directory.Delete(_savePath, true);
                DownloadableZipPath = _zipOutput;
            }
            catch(Exception ex)
            {
                Console.WriteLine($"Create zip failed: {ex.Message}");
            }
        }

        internal static string CreateFileName(XmlDocument item)
        {
            // TBD if this naming format is correct

            var nameParts = new string[]
            {
                "countyCode",
                "type",
                "sid",
                //others?
            };

            var foundParts = new List<string>();

            foreach (var namePart in nameParts)
            {
                var val = item.SelectSingleNode($"/assessmentSubmission/{namePart}");
                if (val != null)
                    foundParts.Add(val.InnerText);
            }

            return $"AS_{string.Join("_", foundParts.ToArray())}.xml";
        }
    }
}