#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

//命名空间
namespace N1//可以定义变量，可以定义函数
{
	int a;
	int Add(int left, int right)
	{
		return left + right;
	}
}

namespace N2//可以嵌套
{
	int a;
	int b;
	int Add(int left, int right)
	{
		return left + right;
	}
	namespace N3
	{
		int c;
		int d;
		int Sub(int left, int right)
		{
			return left + right;
		}
	}
}

namespace N1//同一个工程中允许重名，合成同一个命名空间
{
	int Mul(int left, int right)
	{
		return left + right;
	}
}

//命名空间的使用
namespace N
{
	int a = 10;
	int b = 20;
	int Add(int left, int right)
	{
		return left + right;
	}
	int Sub(int left, int right)
	{
		return left - right;
	}
}
/*
int main()
{
	//C语言语句编译出错，无法识别a
	//printf("%d\n", a);
	printf("%d\n", N::a);
	return 0;
}
*/
/*
using N::b;
int main()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
	return 0;

}
*/
/*
using namespace N;
int main()
{
    printf("%d\n", N::a);
    printf("%d\n", b);
    Add(10, 20);
    return 0;
}
*/

/*输出
using namespace std;
int main()
{
	cout << "Hello world!!!" << endl;
	return 0;
}
*/
/*输入&输出
using namespace std;
int main()
{
	int a;
	double b;
	char c;

	cin >> a;
	cin >> b >> c;

	cout << a << endl;
	cout << b << " " << c << endl;

	return 0;
}
*/
