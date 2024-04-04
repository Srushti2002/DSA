#include<iostream>
using namespace std;

void invertedFullPyramidNumber(int n) {
	for(int i=n; i>=1; i--) {
		for(int j=i; j<n; j++) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<j;
		}
		for(int j=1; j<i; j++) {
			cout<<j+i;
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	invertedFullPyramidNumber(n);
	return 0;
}
