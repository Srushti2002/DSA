#include<iostream>
using namespace std;

void rightHalfPyramidNumber(int n) {
	for(int i=1; j<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout<<j;
			cout<<" ";
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	rightHalfPyramidNumber(n);
	return 0;
}
