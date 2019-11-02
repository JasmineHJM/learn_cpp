#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<time.h>
//��ֵ��������Ч�ʱȽ�
/*
struct A
{
int a[10000];
};
void TestFunc1(A a)
{}
void TestFunc2(A& a)
{}
void TestRefAndValue()
{
A a;
// ��ֵ��Ϊ��������
size_t begin1 = clock();
for (size_t i = 0; i < 10000; ++i)
TestFunc1(a);
size_t end1 = clock();

// ��������Ϊ��������
size_t begin2 = clock();
for (size_t i = 0; i < 10000; ++i)
TestFunc2(a);
size_t end2 = clock();

// �ֱ���������������н������ʱ��
cout << "TestFunc1(int*)-time:" << end1 - begin1 << endl;
cout << "TestFunc2(int&)-time:" << end2 - begin2 << endl;
}

// ���ж�Σ����ֵ�������ڴ��η����Ч������
int main()
{
for (int i = 0; i < 10; ++i)
{


TestRefAndValue();
}
return 0;
}
*/
// ֵ�����õ���Ϊ����ֵ���͵����ܱȽ�
struct A
{
	int a[10000];
};

A a;
A TestFunc1()
{
	return a;
}
A& TestFunc2()
{
	return a;
}
void TestReturnByRefOrValue()
{
	// ��ֵ��Ϊ�����ķ���ֵ����
	size_t begin1 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc1();
	size_t end1 = clock();

	// ��������Ϊ�����ķ���ֵ����    
	size_t begin2 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc2();
	size_t end2 = clock();

	// �������������������֮���ʱ��    
	cout << "TestFunc1 time:" << end1 - begin1 << endl;
	cout << "TestFunc2 time:" << end2 - begin2 << endl;
}

// ��������10�Σ�ֵ��������Ϊ����ֵЧ�ʷ�������� 
int main()
{
	for (int i = 0; i < 10; ++i)
		TestReturnByRefOrValue();

	return 0;
}