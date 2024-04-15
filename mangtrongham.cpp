#include<iostream>
using namespace std;

// mang trong ham 
// tinh trung binh cong
// n la so luong ptu co trong mang
float avg(int arr[] , int n ){
	int sum = 0 ;
	for(int i = 0 ; i < n ; i ++){
		sum += arr[i];
	}
	return sum ;
}
int main(){
	int x , arr1[x];
	cin >> x ;
	cout << "nhap vao gia tri cua mang ";
	for(int h = 0; h < x ; h++){
		cin >> arr1[x];
	}
	cout << avg(arr1 , x );
}
/*
float mang2chieu(int arr[sohang][socot], int n ,int m){
	int sum = 0;
		for (int i = 0 ; i < n ; i ++){
			for(int j = 0 ; j < m ; j ++)
			sum += arr[i][j];
		} return sum ;
}
int main(){
	int arr[2][3]=  {
		{1 2  3},
		{3 4 5 }
		};
	cout << mang2chieu(arr , 2,3);	
	}
*/
