#include<iostream>
using namespace std;
void rightHalfPyramidChar(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout<<(char)('A'+j-1);
			cout<<" ";
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	rightHalfPyramidChar(n);
	return 0;
}
