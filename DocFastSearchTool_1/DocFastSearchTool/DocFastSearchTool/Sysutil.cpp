#include"Sysutil.h"

void DirectoryList(const string &path, vector<string> &subfile, vector<string> &subdir)
{
	//"C:\\Users\\baoso\\Desktop\\55��\\test\\�׶��Կ����Ծ�\\*.*";
	string _path = path;
	_path += "\\*.*";  //ͨ���  * ��%

	struct _finddata_t file;

	long handle = _findfirst(_path.c_str(), &file);
	if(handle == -1)
	{
		perror("_findfirst");
		return;
	}

	do
	{
		if(file.name[0] == '.')
			continue;

		//_A_SUBDIR
		//��һ���ļ���
		if(file.attrib & _A_SUBDIR)     
			subdir.push_back(file.name);
		else
			subfile.push_back(file.name);
	}while(_findnext(handle, &file) == 0);

#if 1
	//��ʾ�ĵ�
	for(auto &e : subfile)
		cout<<e<<endl;

	//��ʾĿ¼
	for(auto &e : subdir)
	{
		cout<<e<<endl;
		//�ݹ���ʾĿ¼������ļ�
		vector<string> _subfile, _subdir;

		//"C:\\Users\\baoso\\Desktop\\55��\\test\\�׶��Կ����Ծ�\\C����";
		string tmp_path = path;
		tmp_path += "\\";
		tmp_path += e;
		DirectoryList(tmp_path, _subfile, _subdir);
	}
#endif
	_findclose(handle);
}