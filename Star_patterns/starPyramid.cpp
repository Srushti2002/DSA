#include<iostream>
using namespace std;

void starPyramid(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n-1; j>=i; j--) {
			cout<<" ";
		}
		
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	
}

int main() {
	
	int n;
	cin>>n;
	
	starPyramid(n);
	return 0;
}
