#include<iostream>
using namespace std;

void diamondPatternAlphabet(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<(char)('A'+j-1);
		}
		for(int j=1; j<i; j++) {
			cout<<(char)('A'+i+j-1);
		}cout<<endl;
	}
	for(int i=n; i>=1; i--) {
		for(int j=n; j>=i; j--) {
			cout<<" ";
		}
		for(int j=1; j<i; j++) {
			cout<<(char)('A'+j-1);
		}
		for(int j=1; j<i-1; j++) {
			cout<<(char)('A'+i+j-2);
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	diamondPatternAlphabet(n);
	return 0;
}
