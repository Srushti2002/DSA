#include<iostream>
using namespace std;

void update(int **p2) {
	//p2 = p2 + 1;
	//kuch change hoga ??-- No
	
	//*p2 = *p2 + 1;
	//kuch change hoga ??-- Yes
	
	**p2 = **p2 + 1;
	//kuch change hoga ??
}

int main() {
	int i = 5;
	int *p = &i;
	int **p2 = &p;
	
	cout<<endl<<"Sab sahi chal rha he "<<endl;
	cout<<"Printing p "<<p<<endl;
	cout<<"address of p "<<&p<<endl;
	cout<<"value of *p2 "<<*p2<<endl;
	
	cout<<"value of i "<<i<<endl;
	cout<<"printing *p "<<*p<<endl;
	cout<<"printing **p2 "<<**p2<<endl;
	
	
	cout<<"printing &i "<<&i<<endl;
	cout<<"printing p "<<p<<endl;
	cout<<"printing *p2 "<<*p2<<endl;
	
	
	cout<<"printing &p "<<&p<<endl;	
	cout<<"printing p2 "<<p2<<endl;
	
	cout<<"before "<< i <<endl;
	cout<<"before "<< p <<endl;
	cout<<"before "<< p2 <<endl;
	update(p2);
	cout<<"after "<<i<<endl;
	cout<<"after "<<p<<endl;
	cout<<"after "<<p2<<endl;
	
	return 0;
	
	
	
}
