#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>

void TestString1() 
{    
	// 注意：string类对象支持直接用cin和cout进行输入和输出
	string s("hello, bit!!!");
	cout << s.size() << endl;    
	cout << s.length() << endl;   
	cout << s.capacity() << endl;   
	cout << s << endl;      
	// 将s中的字符串清空，注意清空时只是将size清0，不改变底层空间的大小   
	s.clear();   
	cout << s.size() << endl; 
	cout << s.capacity() << endl;

	// 将s中有效字符个数增加到10个，多出位置用'a'进行填充    
	// “aaaaaaaaaa”   
	s.resize(10, 'a');  
	cout << s.size() << endl; 
	cout << s.capacity() << endl;

	// 将s中有效字符个数增加到15个，多出位置用缺省值'\0'进行填充   
	// "aaaaaaaaaa\0\0\0\0\0"    
	// 注意此时s中有效字符个数已经增加到15个   
	s.resize(15);    
	cout << s.size() << endl;   
	cout << s.capacity() << endl; 
	cout << s << endl;

	// 将s中有效字符个数缩小到5个  
	s.resize(5);   
	cout << s.size() << endl;   
	cout << s.capacity() << endl;  
	cout << s << endl;
}
void TestString2() {
	string s;   
	// 测试reserve是否会改变string中有效元素个数  
	s.reserve(100);   
	cout << s.size() << endl;  
	cout << s.capacity() << endl;

	// 测试reserve参数小于string的底层空间大小时，是否会将空间缩小 
	s.reserve(50);  
	cout << s.size() << endl;   
	cout << s.capacity() << endl; 
}

	// 利用reserve提高插入数据的效率，避免增容带来的开销 

void TestPushBack() 
{
	string s;
	size_t sz = s.capacity();  
	cout << "making s grow:\n";  
	for (int i = 0; i < 100; ++i)  
	{ 
		s.push_back('c');   
		if (sz != s.capacity())     
		{ 
			sz = s.capacity();       
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

void TestPushBackReserve() 
{ 
	string s;   
	s.reserve(100);  
	size_t sz = s.capacity();     
	cout << "making s grow:\n";   
	for (int i = 0; i < 100; ++i)   
	{
		s.push_back('c');      
		if (sz != s.capacity())  
		{ 
			sz = s.capacity();  
			cout << "capacity changed: " << sz << '\n'; 
		}
	} 
}