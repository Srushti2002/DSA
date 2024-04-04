#include<iostream>
using namespace std;

void floydsTriangle(int n) {
	int k=1;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout<<k;
			cout<<" ";
			k++;
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	floydsTriangle(n);
	return 0;
}
