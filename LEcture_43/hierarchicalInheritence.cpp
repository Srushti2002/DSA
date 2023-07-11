#include<iostream>
using namespace std;

class A {
	
	public:
		
	void walk() {
		cout<<"walking "<<endl;
	}
};

class B : public A {
	public:
		void talk() {
			cout<<"talking "<<endl;
		}
	
};

class C : public A {
	public:
		void speak(){
			cout<<"speaking "<<endl;
		}
	
};

int main() {
	A a1; 
	B b1;
	C c1;
	a1.walk();
	b1.walk();
	b1.talk();
	c1.walk();
	c1.speak();

	return 0;
}
