#include<iostream>
using namespace std;

bool isSearch(int arr[], int s, int e, int k){
	
	//base case
	//elelent not found
	if(s>e){
		return false;
	}
	
	int mid = s+(e-s)/2;
	
	//if elelent found
	if(k==arr[mid]){
		return true;
	}
	
	if(k>arr[mid]){
		return isSearch(arr, mid+1, e, k);
	}else{
		return isSearch(arr, s, mid-1, k);
	}
	mid = s+(e-s)/2;
}

int main(){
	
	int arr[5] = {1,2,3,4,5};
	int size = 5;
	int key = 3;
	
	bool ans = isSearch(arr, 0, size-1, key);
	cout << ans <<  endl;
	return 0;
}
