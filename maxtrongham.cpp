#include<iostream>
using namespace std;
int max(int arr[10] , int n )
{ 	int k = arr[0];
	for (int i = 0 ; i < n ; i ++ ){
		if (k < arr[i]){
			k = arr[i] ;
		}
	} return k ;
}

// tim so max trong ham
int main(){
	int arr[10];
	int n ;
	cin >> n ;
	for(int i = 0 ; i < n ; i ++){
		cin >> arr[i];
	} 
	cout << max(arr , n );
	
	return
	 0 ;	
}
