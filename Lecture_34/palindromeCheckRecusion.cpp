#include<iostream>
using namespace std;

bool isPalindrome(string s, int i, int j){
	//base case
	if(i>j){
		return true;
	}

	//swap(s[i], s[j]);
	if(s[i] != s[j]){
		return false;
	}else{
		return isPalindrome(s, i+1, j-1);
	}
	
}

int main(){
	string s = "abbasa";
	cout<<s<<endl;
	//cout<<endl;
	bool ans = isPalindrome(s ,0, s.length()-1);
	//cout<<ans;
	if(ans){
		cout << "It is a palindrome" << endl;
	}else{
		cout << "Is is not a palindrome" << endl;
	}
	return 0;
}
