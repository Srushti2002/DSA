#include<iostream>
using namespace std;

void hollowInvertedFullPyramidNumber(int n) {
	for(int i=n; i>=1; i--) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		} 
		for(int j=1; j<=i; j++) {
			if(j==1 || i==n) {
				cout<<j;
			}else {
				cout<<" ";
			}
		}
		for(int j=1; j<i; j++) {
			if(j==i-1 || i==n) {
				cout<<j+i;
			}else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	hollowInvertedFullPyramidNumber(n);
	return 0;
}
