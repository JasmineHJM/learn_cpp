#define _CRT_SECURE_NO_WARNINGS 1

//�����ռ�
namespace N1//���Զ�����������Զ��庯��
{
	int a;
	int Add(int left, int right)
	{
		return left + right;
	}
}

namespace N2//����Ƕ��
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

namespace N1//ͬһ�������������������ϳ�ͬһ�������ռ�
{
	int Mul(int left, int right)
	{
		return left + right;
	}
}
