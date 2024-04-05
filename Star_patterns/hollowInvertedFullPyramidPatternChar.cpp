#include<iostream>
using namespace std;

void hollowInvertedFullPyramidPatternChar(int n) {
	for(int i=n; i>=1; i--) {
		for(int j=i; j<n; j++) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(j==1 || i==n) {
				cout<<(char)('A'+j-1);
			}
			else {
				cout<<" ";
			}
		}
		for(int j=1; j<i; j++) { 
			if(i==n || j==i-1) {
				cout<<(char)('A'+i+j-1);
			}
			else{
				cout<<" ";
			}
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	hollowInvertedFullPyramidPatternChar(n);
	return 0;
}
