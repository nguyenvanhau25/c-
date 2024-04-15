#include<iostream>
#include<math.h>
using namespace std;

int Nhap(int &x);
void Input(int array[100] , int n );
void Output (int array[100] , int n);
void Display (int array[100] , int n);

int main(){
	int x;
	int array[100];
//	x = Nhap();
	cout << Nhap(x);
	Input(array , x);
	Output(array , x);
	Display (array , x);
	return 0 ;
}
int Nhap(int &x){
//	int n;
	do{		
	cout << "nhap vao so phan tu:" ;
	cin >> x ;
	}while( x > 20 || x < 1 );

	return x ;
}
void Input(int array[100] , int n ){
	cout <<"nhap vao phan tu cua mang: ";
	for(int i = 0 ; i< n ; i ++){
		cin >> array [i];
	}
}
void Output (int array[100]  , int n){
	cout <<"hien thi mang: ";
	for(int i = 0 ; i < n ; i++){
		cout << array[i] << " "  ;
	} cout << endl;
} 
void Display(int array[100] , int n ){
	int sum = 0 ; int dem = 0;
	cout << "cac phan tu am: ";
	for ( int i = 0 ; i < n ; i ++){
		if (array[i] < 0){
			cout << array[i]<< " ";
		}
	}cout << endl;
	for ( int i = 0 ; i < n ; i ++){
		if (array[i] < 0){
			sum += array[i];
			dem ++;
		}
	}
	float c ;
	c = (float)sum/dem ;
	cout << "trung binh cong: " << c ;
}
