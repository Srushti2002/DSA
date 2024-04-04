#include<iostream>
using namespace std;

void hollowHourglassPattern(int n) {
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<i; j++) {
			cout<<" ";
		}
		for(int j=n; j>=i; j--) {
			if(i==1 || j==n || j==i) {
				cout<<"* ";
			}
			else {
				cout<<"  ";
			}
		}cout<<endl;
	}
	
	for(int i=1; i<n; i++) {
		for(int j=n-1; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i+1; j++) {
			if(i==n-1 || j==1 || j==i+1) {
				cout<<"* ";
			}else {
				cout<<"  ";
			}
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	hollowHourglassPattern(n);
	
	return 0;
}
