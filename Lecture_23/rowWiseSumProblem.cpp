#include<iostream>
using namespace std;

int rowWiseSum(int arr[][4], int i, int j){
	for(i=0; i<3; i++){
		int sum =0;
		for(j=0; j<4; j++){
			sum += arr[i][j];
		}
		cout<<sum<<" ";
	}
	cout<<endl;
}


//int colWiseSum(int arr[][4], int i, int j){
//	for(j=0; j<4; j++){
//		int sum =0;
//		for(i=0; i<3; i++){
//			sum += arr[i][j];
//		}
//		cout<<sum<<" ";
//	}
//	cout<<endl;
//}

int main(){
	int arr[3][4];
	cout<< " enter the element"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cin >> arr[i][j];
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	rowWiseSum(arr, 3, 4);
	
	//colWiseSum(arr, 3, 4);
	
	return 0;
}
