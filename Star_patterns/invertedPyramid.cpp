#include<iostream>
using namespace std;

void invertedStarPyramid(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<i; j++){
			cout<<" ";
		}
		for(int j=n; j>=i; j--) {
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	
	invertedStarPyramid(n);
	return 0;
}
