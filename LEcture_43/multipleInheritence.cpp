#include<iostream>
using namespace std;

class Animal {
	public: 
	int age;
	int weight;
	
	void walk() {
		cout<<"walking "<<endl;
	}
};
class Human {
	public:
		int age;
		int weight;
		
	void speak() {
		cout<<"speaking "<<endl;
	}

};

class Hybrid: public Animal, public Human {
	
};

int main() {
	
	Hybrid h;
	h.walk();
	h.speak();
	
}
