#include<iostream>
using namespace std;

void hallowFullPyramidSecond(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=n; j>i; j--) {
			cout<<" ";
		}
		for(int j=1; j<=i; j++) {
			if(j==1 || j==i || i==n) {
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	hallowFullPyramidSecond(n);
}
