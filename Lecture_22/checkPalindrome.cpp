#include<iostream>
using namespace std;

char toLower(char ch){
	
	if(ch>='a' && ch <= 'z')
	return ch;
	
	else{
		char temp=ch - 'A' + 'a';
	}
}
int getLen(char name[]){
	int count=0;
	for(int i=0; name[i] != '\0'; i++){
		count++;
	}
	return count;
}

bool palindrome(char name[], int n) {
	
	int start=0, end=n-1;
	
	while(start<end){
		if(toLower(name[start]) !=  toLower(name[end])){
			return 0;
		}else{
			start++;
			end--;			
		}		
	}	
	return 1;
}

int main(){
	char name[20];
	cout<<"Enter the name "<<endl;
	cin>>name;
	int len = getLen(name);
	
	cout<<palindrome(name, len)<<endl;
	
	cout<<toLower('C')<<endl;
}

