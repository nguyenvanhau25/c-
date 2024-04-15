#include<iostream>
using namespace std;
void ham_nhap(int array[], int &n ){
	for (int i = 0 ; i < n ; i ++ ){
		cin >> array[i];
		if(array[i] < 0){
			cout << "nhap lai gia tri: " ;
			cin >> array[i] ;
		}
		}	
	}
void ham_xuat (int array[] , int n ){
	for(int i = 0 ; i < n ; i++){
		cout << array[i] << " ";
	}
}
int main(){
	int n , array[n] ;
	cout <<"nhap vao so phan tu:" ;
	cin >> n;
	ham_nhap(array , n );
	ham_xuat(array , n);
	return 0;
}
