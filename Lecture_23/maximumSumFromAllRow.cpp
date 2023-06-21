#include<iostream>
using namespace std;

int maxSum(int arr[][4], int i, int j){
	for(i=0; i<3; i++){
		int sum=0;
		for(j=0; j<4; j++){
			sum+= arr[i][j];
		}
		cout<<sum<<" ";
	}
	cout<<endl;
}
int maxSumFromAll(int arr[][4], int i , int j){
	int maxi = INT_MIN;
	int rowIndex = -1;
	for(i=0; i<3; i++){
		int sum=0;
		for(j=0; j<4; j++){
			sum += arr[i][j];			
		}
		if(sum>maxi){
			maxi = sum;
			rowIndex = i;
		}
	}
	
	cout<<"The maximum sum is "<<maxi<<endl;
	return rowIndex;
}

int main(){
	
	int arr[3][4];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cin>>arr[i][j];
		}
	}
	
	
	for(int i=0; i<3; i++){
		for(int    j=0; j<4; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	maxSum(arr, 3, 4);
	int ans = maxSumFromAll(arr, 3, 4) ;
	cout<<"Maximum sum row index is ";
	cout<<ans<<endl;
	
	
	return 0;
}
