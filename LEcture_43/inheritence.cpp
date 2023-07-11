#include<iostream>
using namespace std;

class Human {
	
	public:
		int height;
		int weight;
		int age;
		
	private:
	int hair;	
		public:
			int getAge(){
				return this->age;
			}
			int setAge(int w){
				this->weight = w;
			}
		
};


class Male: public Human {
	
	public:
		string color;
		
		void attack(){
			cout<<"Male attack"<<endl;
		}
	
	int getHeight() {
		return this->height;
	}
};

int main(){
	
	Male m1;
	//cout<<m1.height<<endl;
	cout<<m1.getHeight();

//	Male object1;
//	cout<<object1.age<<endl;
//	cout<<object1.height<<endl;
//	cout<<object1.weight<<endl;
//	cout<<object1.hair<<endl;
//	
//	cout<<object1.color<<endl;
//	object1.setAge(23);
//	object1.attack();
	return 0;
}
