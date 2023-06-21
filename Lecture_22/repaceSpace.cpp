#include<iostream>
using namespace std;

string replaceSpace(string s){
	string temp=" ";
	
	for(int i=0; i<s.length(); i++) {
		char ch=s[i];
		if(ch == ' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}else{
			temp.push_back(ch);
		}
	}
	return temp;
}

int main(){
	string s = "my name is Rama";
	
	cout<<replaceSpace(s);
}
