#include<iostream>
using namespace std;
int total_odd(int numbers[10] , int n )
{
	int sum = 0;
	for(int i = 0 ; i < n ; i ++){
		if (numbers[i] % 2 == 1 ){
			sum += numbers[i] ;
			 	
		}return sum; 
		
	} return 0 ;
	
}
int main(){

	int n ; 
	cin >>  n ;
	int mang[10];
	for(int i = 0 ; i < n ; i++){
		cin >> mang[i] ;
	}
	cout << total_odd(mang , n );
}
