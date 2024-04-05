#include<iostream>
using namespace std;

void hourglassPatternNumber(int n) {
	for(int i=n; i>=1; i--) {
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
	for(int i=1; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			cout<<" ";
		}
		for(int j=1; j<=i+1; j++) {
			cout<<j;
		}
		for(int j=1; j<=i; j++) {
			cout<<j+i+1;
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	hourglassPatternNumber(n);
	return 0;
}
