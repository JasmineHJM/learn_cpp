#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

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

//�����ռ��ʹ��
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
	//C��������������޷�ʶ��a
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

/*���
using namespace std;
int main()
{
	cout << "Hello world!!!" << endl;
	return 0;
}
*/
/*����&���
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
