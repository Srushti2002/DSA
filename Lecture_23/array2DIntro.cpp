#include<iostream>
using namespace std;

//search an element
bool searchElement(int arr[][4],  int target, int i, int j){
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			if(arr[i][j] == target){
				return 1;
			}
		}
	}
	
	return 0;
	
}

int main(){
	//Create 2D array
	int arr[3][4];
	//int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	//int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};  --{{row, elements}, {row elements}}
	
	//taking input -. row wise input leta he ye
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cin>>arr[i][j];
		}
	}
	
	//taking input column wise
//	for(int i=0; i<4; i++){
//			for(int j=0; j<3; j++){
//				cin>>arr[j][i];
//			}
//		}	
//	//print
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			
			
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	//search an element
	cout<<"Element search"<<endl;
	int target;
	cin>>target;
	if(searchElement(arr, target, 3, 4)){
		cout<<"Element Found"<<endl;
	}
	
	else{
		cout<<"Element not found"<<endl;
	}
	return 0;
}
