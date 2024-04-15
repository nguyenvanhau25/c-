#include<iostream>
using namespace std;
int total(int arr[10][10] , int m , int n )
{
	int sum = 0 ;
	for(int i = 0 ; i < m ; i ++){
		for (int j = 0 ; j < n ; j ++){
			sum += arr[i][j];
		}
	}
	return sum ;
}
int main(){
	int m ,n ;
	cin >> m >> n ;
	int arr1[10][10];
	for(int i = 0 ; i < m ; i ++){
		for ( int j = 0; j < n ; j ++){
			cin >> arr1[i][j];
		}
	}
	cout << total(arr1 , m , n );
}
