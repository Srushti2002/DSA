#include<iostream>
using namespace std;
void fullPyramidNumber(int n) {
	
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			cout<<j;
		}
		for(int j=2; j<=i; j++) {
			cout<<j+i-1;
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	fullPyramidNumber(n);
	return 0;
}
