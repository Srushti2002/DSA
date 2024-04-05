#include<iostream>
using namespace std;
void hollowFullPyramidNumber(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(j==1 || i==n){
				cout<<j;	
			}
			else {
				cout<<" ";
			}
		}
		for(int j=1; j<i; j++) {
			if(j==i-1 || i==n){
				cout<<j+i;	
			}else {
				cout<<" ";
			}
		}cout<<endl;
	}
}
int main() {
	int n;
	cin>>n;
	hollowFullPyramidNumber(n);
	return 0;
}
