#include<iostream>
using namespace std;

bool isFound(int arr[], int size, int key){
	if(size==0){
		return false;
	}
	if(arr[0] == key){
		return true;
	}
	
	else{
		bool remaining = isFound(arr+1, size-1, key);
		return remaining;		
	}

}

int main(){
	int arr[5] = {1,2,3,4,5};
	int size = 5;
	int key;
	cin>>key;
	
	bool ans = isFound(arr, size, key);
	cout << ans << endl;
	
}
