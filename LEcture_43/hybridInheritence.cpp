#include<iostream>
using namespace std;

class A {
	public:
	void fun1() {
		cout<<"This is first function "<<endl;
	}
};

class D {
	public:
	void fun2() {
		cout<<"This is second function "<<endl;
	}
};

class B : public A {
	
	
	public:
	void fun3() {
		cout<<"This is third function "<<endl;
	}
};

class C : public A, public D {
	
	public:
	void fun4() {
		
		cout<<"This is fourth function "<<endl;
	}
};


int main() {
	
	A a1;
	B b1;
	C c1;
	D d1;
	a1.fun1();
	b1.fun1();
	b1.fun3();
	c1.fun1();
	c1.fun2();
	c1.fun4();
	d1.fun2();
	
	return 0;
}
