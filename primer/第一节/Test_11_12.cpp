#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
//��ʽʵ����
template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}

int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.0, d2 = 20.0;
	Add(a1, a2);
	Add(d1, d2);
	// ��ʱ�����ִ���ʽ��1. �û��Լ���ǿ��ת�� 2. ʹ����ʽʵ����  
	Add(a1, (int)d1);
	return 0;
}

//��ʽʵ����
int main(void)
{
	int a = 10;
	double b = 20.0;
	Add<int>(a, b);
	return 0;
}

//1.һ����ģ�庯�����Ժ�һ��ͬ���ĺ���ģ��ͬʱ���ڣ����Ҹú���ģ�廹���Ա�ʵ����Ϊ�����ģ�庯��
// ר�Ŵ���int�ļӷ����� 
int Add(int left, int right)
{
	return left + right;
}

// ͨ�üӷ����� 
template<class T>
T Add(T left, T right)
{
	return left + right;
}
void Test()
{
	Add(1, 2);
	// ���ģ�庯��ƥ�䣬����������Ҫ�ػ�   
	Add<int>(1, 2);
	// ���ñ������ػ���Add�汾
}

//2. ���ڷ�ģ�庯����ͬ������ģ�壬���������������ͬ���ڵ���ʱ�����ȵ��÷�ģ�庯��������Ӹ�ģ �������һ��ʵ�������ģ����Բ���һ�����и���ƥ��ĺ����� ��ô��ѡ��ģ��

// ר�Ŵ���int�ļӷ����� 
int Add(int left, int right)
{
	return left + right;
}

// ͨ�üӷ�����
template<class T1, class T2>
T1 Add(T1 left, T2 right)
{
	return left + right;
}
void Test()
{
	Add(1, 2);
	// ��Ǻ���ģ��������ȫƥ�䣬����Ҫ����ģ��ʵ����  
	Add(1, 2.0);
	// ģ�庯���������ɸ���ƥ��İ汾������������ʵ�����ɸ���ƥ���Add���� 
}

//3. ģ�庯���������Զ�����ת��������ͨ�������Խ����Զ�����ת��
