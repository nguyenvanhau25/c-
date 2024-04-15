#include<iostream>
using namespace std;

int max(int *array ,int n);
int min(int *array ,int n );
int xuat_hien(int *array ,int n);
void arrange (int *array ,int n);
void print_array(int *array , int n );
int main(){
	int n ;
	cout <<"nhap vao so phan tu: " ;
	cin >> n ;
	int array[n];
	for(int i = 0 ; i < n ; i++){
		cin >> array[i];
	}
	cout << "max: "; 
	cout << max (array , n);
	cout << endl << "min la: " ;
	cout << min (array , n);
	arrange (array , n);
	print_array(array , n);
	return 0;
}
int max(int *array ,int n){
	int index = array[0] ;
	for(int i = 0 ; i < n ; i++){
		if(index < array[i] ){
			index = array[i];
		}
	} return index ;
}
int min(int *array ,int n ){
int index = array[0] ;
	for(int i = 0 ; i < n ; i++){
		if(index > array[i] ){
			index = array[i] ;
		}
	} return index ;	
}
/*
int xuat_hien(*array , n){
	int dem = 0 ;
	for(int i = 0 ; i < n ; i ++){
		if ( array[i] == array[i ++ ]){
			dem ++ ;
		}
	}
}
*/
void arrange (int *array ,int n){
	for(int i = n - 1 ; i > 0 ; i--){
		for (int j = 0 ; i < i  ; j ++){
			if (array[j] > array[j + 1]){
				int tmp  = array[j];
				array[j] = array [j + 1];
				array [j+ 1 ] = tmp;
			}
		}
	}

	}

void print_array (int *array , int n ){
	for (int i = 0 ; i < n ; i ++){
		cout << array[i] << " ";
	}
}

