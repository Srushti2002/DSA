#include<iostream>
using namespace std;

int main() {
	
//	int n;
//	cin >> n;

//	//creating a 2D array	
//	int** arr = new int*[n];
//	for(int i=0; i<n; i++){
//		arr[i] = new int[n];
//	}
//	
//		//input
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cin >> arr[i][j];
//		}
//	}
//	
//	//output
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cout << arr[i][j] << " ";
//		}
//		cout<<endl;
//	}
	
	//for different row and different column
	int row;
	cin>> row;
	int column;
	cin>> column;
	
	//creating 2D array
	int** array = new int*[row];
	for(int i=0; i<row; i++){
		array[i] = new int[column];
	}
	
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			cin >> array[i][j];
		}
	}
	
	//output
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			cout << array[i][j] << " ";
		}
		cout<<endl;
	}
	
	//releasing memory of this second array
	
	for(int i=0; i<row; i++){
		delete [] array[i];
	}
	delete []array;
	
	//What we have learnt
	//how to create a 2D array dynamically
	//how to take input//output
	//how to release memor
	
	return 0;
}
