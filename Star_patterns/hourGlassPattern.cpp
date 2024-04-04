#include<iostream>
using namespace std;

void hourGlassPattern(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<i; j++) {
			cout<<" ";
		}
		for(int j=i; j<=n; j++) {
			cout<<"* ";
		}cout<<endl;
	}
	
	for(int i=1; i<n; i++) {
		for(int j=i; j<n-1; j++) {
			cout<<" ";
		}
		for(int j=1; j<=i+1; j++) {
			cout<<"* ";
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	hourGlassPattern(n);
}
