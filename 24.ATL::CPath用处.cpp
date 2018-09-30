ATL::CPath path("C:\\HD\\test");
1. 在末尾添加反斜杠 
   path.AddBackslash();   // C:\\HD\\test\\
2. 在末尾增加扩展名 
   path.AddExtension(".txt");   // C:\\HD\\test.txt
3. 在末尾增加新的
   path.Append("append");   // C:\\HD\\testappend
4. 建立盘符根目录，从0开始
   path.BuildRoot(4);   // E: 
5. 规范一个路径
   path.Canonicalize();
6. 找到俩个路径的公共路径
   path.ComonPrefix("C:\\HD\\othertest");   // C:\\HD
7. 组合一个路径
   path.Combime("C:\\HD", "test");   // C:\\HD\\test
8. 压缩一个路径以适应空间
   path.CompactPathEx(10);
9. 判断路径是否存在
   path.FileExists();
10.判断扩展名的位置
   int nfind = path.FindExtension();
11.获取扩展名
   path.GetExtension();
12.获取驱动器的序号，从0开始
   int npos = path.GetDriveNumber();
13.判断是否是目录
   path.IsDirectory();
14.判断路径是否有划界符号
   path.IsFileSpec();
15.判断两个路径是否有相同前缀
   path.IsPrefix("C:\\HD\\other");
16.判断是不是相对路径
   path.IsRelative("");
17.判断是不是根路径
   path.IsRoot();
18.判断是不是同一个根路径
   path.IsSameRoot("C:\\HD\\OTHER");
19.把全大写路径转换成小写
   path.MakePretty();
20.以windows的通配符语法搜索字符串
   path.MatchSpec("*.txt");
21.如果路径中有空格，则在路径放到引号里
   path.QuoteSpaces();
22.移除一个带参数路径中的参数
   path.RemoveArgs();
23.去掉一个路径中的反斜杠
   path.RemoveBackslash();
24.去掉路径中的前后空格
   path.RemoveBlanks();
25.去掉路径的扩展名
   path.RemoveExtension();
26.移除路径中的文件名称，效果等同于的路径的所在的目录
   path.RemoveFileSpec(); 
27.改变文件扩展名
   path.RenameExtension(".exe")
28.跳过根目录
   path.SkipRoot();
29.移除路径，效果等同获得文件名
   path.StripPaht();  
30.获取磁盘符号
   path.StripToRoot();
31.去掉路径的双引号
   path.UnquoteSpaces();
   
