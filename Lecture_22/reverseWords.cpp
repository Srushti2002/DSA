#include<iostream>
using namespace std;

void reverse(string ch){
	int start =0;
	int end=ch.size()-1;
	for(start<end){
		swap(ch[start++], ch[end--]);
	}
	
}

void space(string s){
	//char ch;
	for(s=0; s<s.length(); s++){
	
		if(s == " "){
			reverse(ch);
		}
		if(s == '/0'){
			reverse(ch);
		}
	}
}


int main(){
	string s;
	cout<<s<<endl;
	cout<<space(s);
		
}
