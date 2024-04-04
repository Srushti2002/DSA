#include<iostream>
using namespace std;

void hallowSquarePattern(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++){
			if(i==1 || j==1 || i==n || j==n) {
				cout<<"*";
			}else{
				cout<<" ";
			}
		}cout<<endl;
	}
}
int main() {
	int n;
	cin>>n;
	hallowSquarePattern(n);
	return 0;
}
