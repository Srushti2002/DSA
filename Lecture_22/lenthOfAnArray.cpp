#include<iostream>
using namespace std;

int getLength(char name[]) {
	int count=0;
	for(int i=0; name[i] !='\0'; i++){
		count++;	
	}
	return count++;
}

int main(){
	int count=0;
	char name[20] = "Babbar";
	cout<<"Count "<<getLength(name)<<endl;
}
