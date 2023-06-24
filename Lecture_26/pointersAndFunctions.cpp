#include<iostream>
using namespace std;

void print(int *p) {
	cout << *p << endl;
}

void update(int *p){
	*p = *p + 1;
	//cout<<"Inside "<<p<<endl ;
}

int getSum(int arr[], int n){
	int sum=0;
	
	cout<<"Size "<<sizeof(arr)<<endl;
	for(int i=0; i<n; i++){
		sum+=  arr[i]; //or sum+=   i[arr]
	}
	
	return sum ;
}

int main(){
	int value = 5;
	int *p = &value;
	print(p);
	
	
	cout<< "Before the update "<<*p<<endl;
	update(p);
	cout<<"After the update "<<*p <<endl;
	
	int arr[6] = {1,2,3,4,5, 13};
	
	 cout  << "Sum is "<< getSum(arr + 3, 3)<<endl;
	
	
	
	return 0;
	
	
	
}
