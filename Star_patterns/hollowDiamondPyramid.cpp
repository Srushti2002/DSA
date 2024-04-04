#include<iostream>
using namespace std;

void hollowDiamondPyramid(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(j==1 || j==i) {
				cout<<"* ";
			}else {
				cout<<"  ";
			}
		}cout<<endl;
	}
	
	for(int i=1; i<n; i++) {
		for(int j=1; j<=i; j++) {
			cout<<" ";
		}
		
		for(int j=n-1; j>=i; j--) {
			if(j==n-1 || j==i){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		
		cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	hollowDiamondPyramid(n);
	return 0;
}
