#include<iostream>
using namespace std;
	
int Nhap();
void Input(int array[100] , int n );
void Output (int array[100] , int n);
void Tach (int array[] , int n1 , int a2[] , int &n2 , int a3[] , int &n3);
void Gop(int a1[] , int &n1, int a2[] , int n2 , int a3[] , int n3 );
void Them(int array[] , int &h , int index , int n);
void Xoa(int array[] , int &h , int index );


int main(){
	int x , n2, n , n1 , n3 ,index ;
	int a2[100] , a1[100] , a3[100] ;
	int array[100];
	x = Nhap();
	Input(array , x);
	Output(array , x);
	Tach( array , x , a2 , n2 , a3 , n3);
	Them(array, x , index , n);
	Xoa(array , x , index );
//	Gop( a1, n1, a2 ,n2 ,  a,  n3 );
	return 0;
}
int Nhap(){
	int n;
	do{		
	cout << "nhap vao so phan tu:" ;
	cin >> n ;
	}while( n > 20 || n < 1 );

	return n ;
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
void Tach (int array[] , int n1 , int a2[] , int &n2 , int a3[] , int &n3){
		n2 = 0 ; n3 = 0 ;
		for (int i = 0 ; i < n1 ; i ++){
			if (array[i] % 2 == 0){
				a2[n2] = array[i];
				n2 ++;
			}else {
				a3[n3] = array[i];
				n3 ++;
			}
		}
		Output (a2 , n2);
		Output (a3 , n3);
}
void Gop(int a1[] , int &n1, int a2[] , int n2 , int a3[] , int n3 ){
	n1 = 0;
	for (int i = 0 ; i < n2 ; i ++){
		a1[n1] = a2[i];
		n1 ++;
	}
	for ( int i = n2 - 1 ; i < n3 ; i ++ ){
		a1[n1] = a3[i];
		n1 ++;
	}
	for (int i = 0 ; i < n1 ; i ++){
		cout << a1[i] << " ";
	}	
}
void Them(int array[] , int &h, int index , int n){
	cout << "nhap vi tri muon them: " ;
	cin >> index;
	for ( int i  = h ; i > index ; i --){
		array[i] = array[i - 1];
	}
	cout << "nhap so muon them: ";
	cin >> n;
	array[index] = n;
	for ( int i = 0 ; i < h + 1 ; i ++ ){
		cout << array[i] << " ";
	} cout << endl;
}

void Xoa(int array[] , int &h , int index)
{
	cout << "nhap vi tri muon xoa : " ;
	cin >> index;
	for ( int i  = index ; i < h - 1 ; i ++ ){
		array[i] = array[i + 1 ];
	}
	for ( int i = 0 ; i < h - 1 ; i ++ ){
		cout << array[i] << " ";
	} cout << endl;

}

	

