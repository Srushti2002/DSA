#include<iostream>
using namespace std;

class Animal {
	public:
		int age;
		int weight;
		
		public:
			void speak() {
				cout<< "Speaking " << endl;
			}
};

class Dog: public Animal {
	
	
};

class GermanShephard: public Dog {
	
};

int main(){
	
	Dog d;
	GermanShephard g;
	g.speak();
	d.speak();
	cout<<g.age<<endl;
	cout<<d.age<<endl;
	
	
	return 0;
}
