#include<iostream>
using namespace std;
void hollowSquarePatternChar(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(i==1 || j==1 || i==n || j==n) {
				cout<<(char)('A'+j-1);
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
	hollowSquarePatternChar(n);
	return 0;
}
