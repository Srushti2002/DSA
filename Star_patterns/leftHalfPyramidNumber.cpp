#include<iostream>
using namespace std;

void leftHalfPyramidNumber(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			cout<<j;
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	leftHalfPyramidNumber(n);
	return 0;
}
