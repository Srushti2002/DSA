#include<iostream>
using namespace std;

int main(){
	
	int arr[5] = {1,2,3,4,5};
	char ch[6] = "abcde";
	
	cout<< arr <<endl;
	cout<< ch <<endl;
	
	int *ptr = &arr[0];
	cout<< ptr <<endl;
	
	char *c = &ch[0];
	
	//Entire string print hogi
	cout << c << endl;
	
	char temp = 'z';
	char *p = &temp;
	
	cout << p <<endl     ;
	return 0;
}
