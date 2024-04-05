#include<iostream>
using namespace std;

void hollowFullPyramidChar(int n) {
	
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(j==1 || i==n) {
				cout<<(char)('A'+j-1);
			}else {
				cout<<" ";
			}
		}
		for(int j=1; j<i; j++) {
			if(j==i-1 || i==n) {
				cout<<(char)('A'+j+i-1);
			}else {
				cout<<" ";
			}
		}cout<<endl;
	}
	
}

 int main() {
	int n;
	cin>>n;
	hollowFullPyramidChar(n);
	return 0;
}
