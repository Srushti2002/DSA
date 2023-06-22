#include<iostream>
using namespace std;

int spiralPrint(int arr[][4], int i, int j){
	i=3;
	j=4;
	int count =0;
	int total = i*j;
	int startingRow=0;
	int startingCol=0;
	int endingRow=i-1;
	int endingCol=j-1;
	while(count < total){
	//print starting Row
	for(int index=startingCol; count < total && index<=endingCol; index++){
		cout<<arr[startingRow][index]<<" ";
		count++;
	}
	startingRow++;
	
	//print ending column	
	 for(int index=startingRow; count < total && index<=endingRow; index++){
	 	cout<<arr[index][endingCol]<<" ";
	 	count++;
	 }
	 endingCol--;
	 
	
	 //print ending row 
	 for(int index=endingCol; count < total && index>=startingCol; index--){
	 	cout<<arr[endingRow][index]<<" ";
	 	count++;
	 }
	 endingRow--;
	 
	 //print starting column
	for(int index=endingRow; count < total && index>=startingRow; index--){
		cout<<arr[index][startingCol]<<" ";
		count++;
	}
	startingCol++;
	
	}
	
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
	spiralPrint(arr, 3, 4);
	return 0;	
}
