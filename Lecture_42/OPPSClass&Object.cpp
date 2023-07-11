#include<iostream>
//#include "Hero.cpp"
using namespace std;

class Hero {
	public:
	//properties
	//char name[100];
	private:
	int health;
	
	public:
	char level;
	char *name;
	static int timeToComplete;
	
	Hero() {
		cout<<"Simple constructor called"<<endl;
		name = new char[100];
	}
	//parameterized constructor
	Hero(int health){
		cout<<"this ->"<< this <<endl;
		this->health = health;//input ka health edhr current object jo this se darshaya he udhr jae
	}
	
	Hero(int health, char level, char name[7]) {
		cout<<"this "<< this <<endl;
		this->health = health;
		this->level = level;
		this->name = name;
	}
	
	
	
	//Copy constructor
	Hero(Hero& temp){
		
		char *ch = new char[strlen(temp.name) + 1];
		strcpy(ch, temp.name);
		this->name = ch;
		cout<<"Copy constructor called "<<endl;
		this->health = temp.health;
		this->level = temp.level;
	}
	
	void print() {
		cout<<"[name: "<<this->name<<" ,";
		cout<<"health: "<<this->health<<" ,";
		cout<<"level: "<<this->level<<" ]";
		cout<<endl;
	}
	
	int getHealth() {
		return health;
	}
	
	char getLevel() {
		return level;
	}
	
	void setHealth(int h) {
		health = h;
	}
	
	void setLevel (char ch ) {
		level = ch;
	}	

	void setName (char name[]){
		strcpy(this->name, name);
	}
	
	static int random() {
		return timeToComplete ;
	}
	
	~Hero(){
		cout<<"Destructor bhai called "<<endl;
	}
	
};

int Hero::timeToComplete   = 5;

int main(){
	
	
	cout << Hero::timeToComplete << endl;
	cout<<HEro::random()<<endl;
	
//	Hero a;
//	
//	cout << a.timeToComplete << endl;
//	
//	Hero b;
//	b.timeToComplete = 10
//	cout<<a.timeToComplete << endl;
//	cout << b.timeToComplete << endl;
		
//	//static
//	Hero a;
//	
//	//dynamic
//	Hero *b = new Hero();
//	//manually destructor call
//	delete b;
//	
//	Hero hero1;
//	
//	hero1.setHealth(12);
//	hero1.setLevel('D');
//	char name[7] = 'Babbar';
//	hero1.setName(name);
//	hero1.print();
//	
//	//use default copy constructor
//	
//	Hero.hero2(hero2);
//	hero2.print();
//	hero1.name[0] = 'G';
//	
//	hero1.print();
//	
//	hero2.print();	
//	
//	hero1 = hero2;
//	hero1.print();
//	hero2.print();	
//	
//	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//Hero tt;//--age Hero constructor htado to ye nhi bnega kyuki
	// parameter constructor use krne ke bad defalut ht jata hee
	// jo original wala ht jata hee
	
//	//object created statically
//	Hero ramesh(10);
//	ramesh.print();
//	
//	//object created dynamically
//	//Hero *r = new Hero;	
//	Hero *a = new Hero(); //same
//	a->print();	
//	
//	cout<<"Address of Ramesh "<<&ramesh <<endl;	
//	ramesh.getHealth();
//	
//	Hero temp(22, 'B');
//	temp.print();	
//	//static allocation
//	Hero a;
//	a.setLevel('B');
//	a.setHealth(90);
//	cout <<"level " << a.level<<endl;
//	cout <<"health is "<<a.getHealth()<<endl;	
//	//dynamically
//	Hero *b = new Hero;
//	b->setLevel('A');
//	b->setHealth(70);
//	cout <<"level is "<<(*b).level <<endl;
//	cout<< "health is "<<(*b).getHealth()  <<endl; 
//	
//	cout<<"level is "<<b->level<<endl;
//	cout<<"health is "<< b->getHealth() << endl;
//	
//	//Creation of Object
////	Hero ramesh;
////	cout << "Ramesh health is "<<ramesh.getHealth() << endl;
////	ramesh.setHealth(70);
////	//ramesh.health = 70;
////	ramesh.level = 'A';
////	cout<<"Size : "<<sizeof(ramesh) <<endl;
////	cout << "health is: "<< ramesh.getHealth() << endl;
////	cout << "level is: "<< ramesh.level << endl;
////	
//	
//	
	return 0;
}
