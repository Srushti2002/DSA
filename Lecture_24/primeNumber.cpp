#include<iostream>
using namespace std;

bool isPrime(int n){
	if(n<=0){
		return false;
	}
	for(int i=2; i<n; i++){
		
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int num;
	cout<<"Enter the number "<<endl;
	cin>>num;
	
	cout<<isPrime(num)<<endl;  
}
