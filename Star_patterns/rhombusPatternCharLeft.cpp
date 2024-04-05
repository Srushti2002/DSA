#include<iostream>
using namespace std;

void rhombusPatternCharLeft(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<i; j++) {
			cout<<" ";
		}
		for(int j=1; j<=n; j++) {
			cout<<(char)('A'+j-1);
		}cout<<endl;
	}cout<<endl;
}

void rhombusPatternCharRight(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--){
			cout<<" ";
		}
		for(int j=1; j<=n; j++) {
			cout<<(char)('A'+j-1);
		}cout<<endl;
	}cout<<endl;
	cout<<endl;
}

int main() {
	int n;
	cin>>n;
	rhombusPatternCharLeft(n);
	rhombusPatternCharRight(n);
	return 0;
}
