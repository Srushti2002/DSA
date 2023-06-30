#include<iostream>
using namespace std;

int printCounting(int n){
	
	if(n==0){
		return 1;
	}
	
	// Tail recursion
//	cout << n << endl;
//	printCounting(n-1);	
	
	// Head recursion
	printCounting(n-1);	
	cout << n << endl;
		
}

int main(){
	
	int n;
	cin>> n;	
	cout << endl;	
	printCounting(n);	
	
	return 0;
}
