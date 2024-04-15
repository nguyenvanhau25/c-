#include<iostream>
using namespace std;
void ham_nhap(int array[], int &n ){
	cout <<"nhap vao so luong ptu: ";
	cin >> n;
	for (int i = 0 ; i < n ; i ++ ){
		cin >> array[i];	
	}	
	for(int i = 0 ; i < n ; i ++){
	if (array[i] < 0 ){
		cout <<"nhap so duong: " << endl;
		for(int x = 0 ; x < n ; x++){
			cin >> array[x];
	}
		}	
		}
	}
void ham_xuat (int array[] , int &n ){
	cout <<"cac phan tu cua ham: "; 
	for(int i = 0 ; i < n ; i++){
		cout << array[i] << " " ;
	}cout << endl;
}
int min(int arr[] , int n )
{ 	int k = arr[0];
	cout <<"gia tri min: ";
	for (int i = 0 ; i < n ; i ++ ){
		if (k > arr[i] ){
			k = arr[i] ;
		}
	} return k ;
}
int main(){
	int n , array[n] ;
	ham_nhap(array , n );
	ham_xuat(array , n);
	cout << min(array , n );
	return 0;
}
