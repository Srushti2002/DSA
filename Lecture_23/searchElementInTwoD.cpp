#include<iostream>
using namespace std;

bool searchElementInTwoD(int arr[][4], int i, int j, int target){
	
	int start=0, end=i*j-1;
	
	int mid= start+(end-start)/2;
	
	while(start<=end){
		int element = arr[mid/j][mid%j];
		if(element==target){
			return 1;
		}
		
		if(element<target){
			start=mid+1;
		}
		
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
			
	}
	
	
	
	return 0;
	
	
	
	
}

int main(){
	int arr[3][4];
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
		cin>>arr[i][j];			
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<searchElementInTwoD(arr, 3, 4, 5);
	return 0;	
}
