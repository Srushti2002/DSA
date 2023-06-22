#include<iostream>
using namespace std;

int printLikeAWave(int arr[][4], int i, int j){
	for(j=0; j<4; j++){
		if(j&1){
			for(i=2; i>=0; i--){
			cout<<arr[i][j]<<" ";
			}
		}
		
		else{
			for(i=0; i<3; i++){
					cout<<arr[i][j]<<" ";
				}
			}
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
	
	printLikeAWave(arr, 3, 4);
	return 0;
}

