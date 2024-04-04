#include<iostream>
using namespace std;

void pascalsTriangle(int n) {
	for(int i=1; i<=n; i++){
		for(int j=n; j>i; j--){
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(j==1 || j==i) {
				cout<<1;
				cout<<" ";
			}else {
				cout<<i-1;
				cout<<" ";
			}
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	pascalsTriangle(n);
	return 0;
}
