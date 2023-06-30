#include<iostream>
using namespace std;

int& funct(int a){
	int num = a; // ye sirf ek function tk hi simit he uske bad ke kuch extince show hi 
	//kr skta cause its a local variable (num) to ye ek bad practice he 
	
	int& ans = num;
	return ans;
	
}

int* fun(int b){
	int* ptr = &b;
	return ptr;
}

void update2(int& n)   {
	n++;
}

void update(int n){
	n++;
}

int main(){
	int i=5;
	//create a ref value
	
	int &j = i;
	
	cout<<i<<endl;
	i++;
	cout<<i<<endl;
	j++;
	cout<<i<<endl;
	cout<<j<<endl;
	
	//Normal value
	int n = 5;
	cout<<"before "<<n<<endl;
	update(n);
	cout<<"after "<<n<<endl;
	
	//With reference value
	int m = 5;
	cout<<"before "<<m<<endl;
	update2(m);
	cout<<"after "<<m<<endl;
	
	//cout<<funct(n)<<endl;
	fun(n);
	
	
	
	return 0;
}
