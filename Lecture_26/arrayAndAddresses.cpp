#include<iostream>
using namespace std;

int main(){
	int arr[10] = {23, 122, 41, 67};
	
	cout<<"Address of first memory block is "<<arr<<endl;
	cout<< arr[0]<<endl;
	cout<<"Address of first memory block is "<<&arr[0]<<endl;
	cout<<"value of first memory block is "<<*arr<<endl;
	cout<<"Value of first memory with + operation block is "<<*arr + 1<<endl;
	cout<<"value of second memory block is "<<*(arr+1)<<endl;
	cout<<"Value of first memory with + operation block is "<<(*arr) + 1<<endl;
	cout<<"value of third memory block is "<<*(arr+2)<<endl;
	cout<<"value of third memory block is "<<*(2+arr)<<endl;
	
	int i=3;
	cout<<i[arr]<<endl;
	
	int temp[10] = {1,2};
	cout<<"size of temp "<<sizeof(temp)<<endl;
	cout<<"size of *temp "<<sizeof(*temp)<<endl;
	cout<<"size of &temp "<<sizeof(&temp)<<endl;
	
	int *ptr = &temp[0];
	cout<<"size of ptr "<<sizeof(ptr)<<endl;
	cout<<"size of *ptr "<<sizeof(*ptr)<<endl;
	cout<<"size of &ptr "<<sizeof(&ptr)<<endl;
	
	int a[20] = {1,2,3,5};
	cout <<"Address of &a[0] "<< &a[0]<<endl;
	//cout <<"Address of &a "<< &a<<endl;
	//cout <<"Address of a "<< a<<endl;
	
	int *p = &a[0];
	//cout <<"Address of p "<< p<<endl;
	//cout <<"Value of *p "<< *p<<endl;
	cout <<"Address of &p "<< &p<<endl;
	
	int ar[10];
	
	//ar= ar+1;//error
	
	int *pt = &ar[0];
	cout << "Addrress of pt before "<<pt<<endl;
	pt = pt + 1;
	cout << "Addrress of pt   address "<<pt<<endl;
}



