#include"Common.h"
#include"Sysutil.h"

void Test_DirectoryList()
{
	string path = "C:\\Users\\DoubleH\\Desktop\\LQBZ\\����";
	vector<string>subfile, subdir;
	DirectoryList(path, subfile, subdir);

	//vector<string>::iterator it = subfile.begin();

	for (auto &e : subfile)
		//cout << typeid(e).name << endl;//�Ƶ�Ϊstring
		cout << e << endl;
	for (auto &e : subdir)
		cout << e << endl;

}

int main(int argc, char *argv[])
{
	Test_DirectoryList();
	system("pause");
	return 0;
}