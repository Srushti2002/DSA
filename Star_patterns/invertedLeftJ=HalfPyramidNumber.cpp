#include<iostream>
using namespace std;

void invertedLeftHalfPyramidNumber(int n){
	for(int i=n; i>=1; i--) {
		for(int j=i; j<n; j++){
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
	invertedLeftHalfPyramidNumber(n);
	return 0;
}
