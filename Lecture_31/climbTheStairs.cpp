#include<iostream>
using namespace std;

int climbStairs(int n){
	
	//base condition
	if(n < 0)
	return 0;
	if(n == 0)
	return 1;
	
	//recursive realtion
	int ans = climbStairs(n-1) + climbStairs(n-2);
	return ans;
}

int main() {
	
	int n;
	cin >> n;
	
	int steps = climbStairs(n);
	cout<< steps <<endl;
	
	return 0;
}
