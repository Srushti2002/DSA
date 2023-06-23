#include<iostream>
using namespace std;

int main(){
	int num = 5;
	
	cout<<num<<endl;
	
	//address od operator - &+
	
	cout<<"Address of num is "<< &num << endl;
	

	
	int *ptr = &num;
	
	cout<<"addrees is : "<<ptr<<endl;
	cout<<"value is : "<<*ptr<<endl;
	
	double d = 4.3;
	double *p2 = &d;
	
	cout<<"address is : "<<p2<<endl;
	cout<<"value is : "<<*p2<<endl; 
	
	
	cout<<"size of integer "<<sizeof(num)<<endl;
	cout<<"size of integer "<<sizeof(ptr)<<endl;	
	
	//pointer to int is created, and pointing to some garbage address
	//int *p = 0;//segmentation fault
	//cout<<*p<<endl;
	
	//null pointer and value access
	
//	int i = 5;
//	int *q = &i;
//	
//	cout<<q<<endl;
//	cout<<*q<<endl;
//	
//	
//	int *p = 0;
//	p = &i;
//	
//	cout<<p<<endl;
//	cout<<*p<<endl  ;

	int n = 5;
	int a = n;
	cout<<"before "<<n<<endl;
	a++;
	cout<<"after "<<n<<endl;
	cout<<n<<endl;
	
	int *p = &n;
	cout<<"before "<<n<<endl;
	(*p)++;
	cout<<"after "<<n<<endl;
	
	//Copying a pointer 
	int *q = p;
	cout<< p <<" - "<< q << endl;
	cout<< *p <<" - "<< *q << endl;
	
	//pointer arithmatic
	//important concept
	int i = 3;
	int *t = &i;
	//cout << (*t)++ << endl;
	*t = *t +1;
	cout<<*t<<endl;
	
	cout << " before t "<< t << endl;
	
	t = t + 1;
	cout<<" after  t "<< t << endl;
	
	return 0;
	
}
