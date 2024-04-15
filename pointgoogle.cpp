#include<iostream>
#include<math.h>
using namespace std;
int sn(int n);
int main(){
//	
//	for(int i = 1 ; i <= 7 ; i++){
//		for (int j = 1 ; j <= i ; j ++){
//			cout << j ;
//	}
//		for (int k = 7 - i ; k >= 1 ; k--){
//			cout <<"*";
//		}cout << endl;
//	}
/*	
	for (int i = 1 ; i < 10 ; i += 2){
		for (int j = 1 ; j <= i ; j ++){
			cout << "*";
		}cout << endl;
		
	}
	for (int i = 10 ; i > 0 ; i = i- 2){
		for (int j = 1 ; j < i ; j++){
			cout << "*";
		}cout << endl;
}
*/
/*
	int n , m ; 
	cout <<"nhap vao so phan tu:" ;
	cin >> n >> m ;
	int array[n][m];
	for (int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < m ; j++){
			cin >>array[i][j];
		}
	} 
	int sum = 0 ;
	if ( n  != m ){
	for (int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < m ; j++){
			sum += array[i][j];
		}
	}
	} else {
		for (int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < m ; j++){
			if ( array[i] == array[j] ){
				sum += array[i][j];
			}
	}
}
}
		cout << sum;
	
*/	

	int n ;
	cin >> n; 
	
	cout << sn(n);
		
	return 0;
}

int sn(int n )
{
		return (pow((float)n,n)*sn(n-1));
}
