#include<iostream>
using namespace std;
void hollowSquarePatternNumber(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(i==1 || i==n || j==1 || j==n) {
				cout<<j;
			}else{
				cout<<" ";
			}
		}cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	hollowSquarePatternNumber(n);
	return 0;
}
