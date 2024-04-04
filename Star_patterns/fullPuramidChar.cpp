#include<iostream>
using namespace std;

void fullPyramidChar(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			cout<<(char)('A'+j-1);
		}
		for(int j=1; j<i; j++) {
			cout<<(char)('A'+j+i-1);
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	fullPyramidChar(n);
	return 0;
}
