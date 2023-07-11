#include<iostream>
using namespace std;

int power(int a, int b){
	//base case
	if(a==0){
		return 0;
	}
	if(b==0){
		return 1;
	}
	
	int ans = power(a, b/2);
	
	if( b%2 == 0){
		return ans * ans;
	}else{
	    return a* ans * ans;	
	}
	
}

int main(){
	int a, b;
	cin>>a>>b;
	int ans = power(a,b);
	cout<<ans;
	
}
