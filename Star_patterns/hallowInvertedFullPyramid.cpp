#include<iostream>
using namespace std;

void hallowInvertedFullPyramid(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<i; j++) {
			cout<<" ";
		}
		
		for(int j=n; j>=i; j--) {
			if(j==n || i==1) {
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		
		for(int j=n-1; j>=i; j--){
			if(j==i || i==1) {
				cout<<"*";
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
	hallowInvertedFullPyramid(n);
	return 0;
}
