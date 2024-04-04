#include<iostream>
using namespace std;
int main() {
	
//	int a=4;
//	int b=6;
//	cout<<" a&b "<<(a&b)<<endl;
//	cout<<"a|b "<<(a|b)<<endl;
//	cout<<"~a "<<(~a)<<endl;
//	cout<<"a^b "<<(a^b)<<endl;
//	cout<<(17>>1)<<endl;
//	cout<<(17>>2)<<endl;
//	cout<<(19<<1)<<endl;
//	cout<<(19<<3)<<endl;
//	int sum =0;
//	for(int i=1; i<=b; i++){
//		sum+=i;
//	}
	
//	int a=0;
//	int b=1;
//	int n=10;
//	int c=0;
//	cout<<a<<" ";
//	cout<<b<<" ";
//	for(int i=0; i<n-2; i++) {
//		c=a+b;
//		cout<<c<<" ";
//		a=b;
//		b=c;
//		
//	}

//	int a=-6;
//	if(a%2==1){
//		cout<<"odd"<<endl;
//	}
//	else if(a%2==0){
//		cout<<"even"<<endl;
//	}
//	else{
//		cout<<"Zero"<<endl;
//	}
//	bool isPrime=1;
//	int a=9;
//	for(int i=2; i<a; i++){
//		if(a%i==0 && a!=2){
//			cout<<"Not a prime number"<<endl;
//			isPrime=0;
//			break;
//		}
//	}
//	if(isPrime==1){
//		cout<<"Prime number"<<endl;
//	}
	
//	for(int i=0; i<=5; i++){
//		cout<<i<<" ";
//		i++;
//	}
 	
// 	for(int i=0; i<=5; i--){
// 		cout<<i<<" ";
// 		i++;
//	 }
	
//	for(int i=0; i<=15; i+=2){
//		cout<<i<<" ";
//		
//		if(i&1){
//			continue;
//		}
//		i++;
//	}

//	for(int i=0; i<5; i++) {
//		for(int j=i; j<=5; j++) {
//			cout<<i<<" "<<j<<endl;
//		}
//	}

	for(int i=0; i<5; i++) {
		for(int j=i; j<=5; j++){
			if(i+j == 10) {
				break;
			}
			
			cout<<i <<"  "<<j  <<endl;
		}
	}
	
//	cout<<sum;
//	return 0;
}
