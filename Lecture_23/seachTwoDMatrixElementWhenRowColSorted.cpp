#include<iostream>
using namespace std;

bool searchTwoDIJSorted(int arr[][4], int i, int j, int t){
	//int start=0, end=i*j-1;
	
	int rowIndex = 0;
	int colIndex = j - 1;
	while(rowIndex < i && colIndex >=0){
		int element = arr[rowIndex][colIndex];
		if(element == t){
			return 1;
		}
		if(element < t){
			
			rowIndex++;
		}else{
			colIndex--;
		}
		
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
	cout<<searchTwoDIJSorted(arr, 3, 4, 5)<<endl;
	
	return 0;	
}
