#include<iostream>
using namespace std;

void invertedLeftHalfPyramid(int n) {
	for(int i=n; i>=1; i--) {
		
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			cout<<(char)('A'+j-1);
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	invertedLeftHalfPyramid(n);
	return 0;
}
