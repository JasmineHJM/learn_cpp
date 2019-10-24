#define _CRT_SECURE_NO_WARNINGS 1

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
