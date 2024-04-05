#include<iostream>
using namespace std;

void hollowDiamondPatternChar(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(j==1) {
				cout<<(char)('A'+j-1);
			}else {
				cout<<" ";
			}
		}
		for(int j=1; j<i; j++) {
			if(j==i-1) {
				cout<<(char)('A'+j+i-1);
			}else {
				cout<<" ";
			}
		}cout<<endl;
	}
	
	for(int i=n-1; i>=1; i--) {
		for(int j=i; j<n; j++) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(j==1) {
				cout<<(char)('A'+j-1);
				
			}else {
				cout<<" ";
			}
		}
		for(int j=1; j<i; j++) {
			if(j==i-1) {
				cout<<(char)('A'+i+j-1);
			}else {
				cout<<" ";
			}
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	hollowDiamondPatternChar(n);
	return 0;
}
