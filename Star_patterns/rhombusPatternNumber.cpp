#include<iostream>
using namespace std;

void rhombusPatternNumberRight(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<i; j++) {
			cout<<" ";
		}
		for(int j=1; j<=n; j++) {
			cout<<j;
		}cout<<endl;
	}cout<<endl;
}

void rhombusPatternNumberLeft(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=n; j++){
			cout<<j;
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	rhombusPatternNumberRight(n);
	rhombusPatternNumberLeft(n);
	return 0;
}
