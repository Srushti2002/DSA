#include<iostream>
using namespace std;
char maxOccurance(string s){
	int arr[26] = {0};
	
	//create an array of count of character
	for(int i=0; i<s.length(); i++){
		char ch = s[i];
		int number=0;
		number = ch -'a';
		arr[number]++;	
	}
	
	
	int maxi = -1, ans = -1;
	
	for(int i=0; i<26; i++){
		if(maxi<arr[i]){
			ans=i;
			maxi=arr[i];
		}
		
	}
	
	char finalAns = 'a'+ans;
}

int main(){
	string s;
	cin>>s;
	cout<< maxOccurance(s)<<endl;
	return 0;
}
