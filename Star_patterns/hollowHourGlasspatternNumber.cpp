#include<iostream>
using namespace std;

void hollowHourGlassPatternNumber(int n) {
	for(int i=n; i>=1; i--) {
		for(int j=i; j<n; j++) {
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
			if(i==n || j==i-1) {
				cout<<j+i;
			}else {
				cout<<" ";
			}
		}cout<<endl;
	}
	
	for(int i=1; i<n; i++) {
		for(int j=i; j<n-1; j++) {
			cout<<" ";
		}
		for(int j=1; j<=i+1; j++) {
			if(j==1 || i==n-1) {
				cout<<j;
			}else {
				cout<<" ";
			}
		}
		for(int j=1; j<=i; j++) {
			if(j==i || i==n-1){
				cout<<i+j+1;
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
	hollowHourGlassPatternNumber(n);
	return 0;
}
