#include<iostream> 
using namespace std;
/*
class Sample{
public:  Sample(int x)
{
	 p = new int(x);
} 
		 ~Sample()
		 { 
			 if(p) delete p; 
		 }  
		 int show()
		 {  
			 return *p;
		 } 
private:  
	int*p; 
};
int main()
{ 
	Sample S(5);
	cout<<S.show()<<endl;
	return 0;
}
*/
/*
class classA { ... };
class classB 
{ 
public: 
	classB(classA a)
	{ 
			mA = a;
	} 
private: classA mA; 
}; 
class classA { ... };
class classB { 
public: 
	classB(classA a) : mA(a) 
	{} 
private: 
	classA mA; 
};
*/

/*
class A { 
public:  
	int GetValue()
	{
		return vv;
	}
	int GetValue()const 
	{ 
		//((A *)this)->vv=1;
		vv = 1;     
		return vv; 
	}  
private:    
	mutable int vv; 
};

void main()
{

}
*/
class MyClass{ 
public:      
	MyClass(int i = 0){cout << 1;}      
	MyClass(const MyClass&x){cout<<2;}
	MyClass& operator=(const MyClass&x){cout << 3; return*this;}
	~MyClass(){ cout << 4; }
}; 
int main()
{ 
	MyClass obj1(1), 
		obj2(2), 
		obj3(obj1); 
	return 0;
}
