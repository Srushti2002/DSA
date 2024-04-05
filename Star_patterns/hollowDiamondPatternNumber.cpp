#include<iostream>
using namespace std;

void hollowDiamondPatternNumber(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=i; j<n; j++) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(j==1) {
				cout<<j;
			}
			else {
				cout<<" ";
			}
		}
		for(int j=1; j<i; j++) {
			if(j==i-1) {
				cout<<i+j;
			}else {
				cout<<" ";
			}
		} cout<<endl;
	}
	
	for(int i=n-1; i>=1; i--) {
		for(int j=i+1; j<=n; j++) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(j==1) {
				cout<<j;
			}else {
				cout<<" ";
			}
		}
		for(int j=1; j<i; j++) {
			if(j==i-1) {
				cout<<i+j;
			}else {
				cout<<" ";
			}
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	hollowDiamondPatternNumber(n);
	return 0;
}
