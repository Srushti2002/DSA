#include<iostream>
using namespace std;

void reverse(char name[], int n){


	int start=0, end=n-1;
	while(start<end){
	
		swap(name[start++], name[end--]);
	} 
} 

int getLen(char name[]){
	int count=0;
	for(int i=0; name[i] != '\0'; i++){
		count++;
	}
	return count;
}

int main() {
	char name[20];
	
	cout<<"Enter the name "<<endl;
	cin>>name; 
	int len = getLen(name);
	cout<<"Reverse the array "<<endl;
	
	reverse(name, len);
	cout<<name<<endl;
	
}
