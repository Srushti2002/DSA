#include<iostream>
using namespace std;

class A {
	
	public:
		void sayHello() {
			cout<< "Hello Love babbar"<<endl;
		}
		//function  overloading 		
		int sayHello(string ba, int n) {
			cout<< "Hello Love babbar"<<endl;
			return 1;
		}
		//function  overloading 
		void sayHello(string ba) {
			cout<< "Hello Love babbar"<<endl;
		}
};

int main() {
	A obj;
	obj.sayHello()  ;	
	
	
	return 0;
}
