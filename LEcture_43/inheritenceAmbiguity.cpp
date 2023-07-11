#include<iostream>
using namespace std;

class A {
	public:
	void abc() {
		cout<<"Print class A"<<endl;
	}
};

class B {
	public:
	void abc() {
		cout<<"Print classs B"<<endl;
	}
};

class C : public A, public B {
	
};

int main() {
	A a1;
	B b1;
	C c1;
	c1.A::abc();
	c1.B::abc();  
	
	
}
