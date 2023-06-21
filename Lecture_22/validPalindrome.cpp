#include<iostream>

#include<string>
using namespace std;

bool valid(char ch){
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
		return 1;
	}else{
		return 0;
	}
}
char lowerCase(char ch){
	if((ch>='a' && ch<='z') || (ch<='0' && ch>='9')){
		return ch;
	}else{
		char temp = ch- 'A' + 'a'; 
		return temp;
	}
}

bool palind(string st){
	int start=0, end=st.size() -1;
	while(start<end){
		if(st[start] != st[end]){
			return 0;
		}
		else{
			start++; 
			end--;
		}
	}
	return 1;
	
}

bool palindrom(string s){
	
	string temp;
	for(int j=0; j<s.length(); j++){
		if(valid(s[j])){
			temp.push_back(s[j]);
		}
	}
	
	for(int j=0; j<temp.length(); j++){
		temp[j] = lowerCase(temp[j]);
	}
	
	return palind(temp);
	
}

int main(){
	string name;
	cin>>name;
	cout<<name<<endl;
	cout<<palindrom(name);
	//cout<<p<<endl;
}
