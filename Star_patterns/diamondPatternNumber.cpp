#include<iostream>
using namespace std;

void diamodPatternNumber(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			cout<<j;
		}
		for(int j=1; j<i; j++) {
			cout<<i+j;
		}cout<<endl;
	}
	
	for(int i=n-1; i>=1; i--) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			cout<<j;
		}
		for(int j=1; j<i; j++) {
			cout<<i+j;
		} cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	diamodPatternNumber(n);
}
