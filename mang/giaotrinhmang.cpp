#include<iostream>
#include <math.h>
using namespace std;

void Input (int *a , int &n);
void Output (int *a , int n);
bool Nt(int n);
void Gop_mang(int *a , int n , int *b , int x , int *c , int &y);
void Tach_mang (int *a , int n , int *b , int &x , int *c , int &y);
int Max(int *a , int n);
void Sap_xep(int *a , int n);
void Them ( int *a , int &n, int index , int t );
void Xoa(int *a , int &n, int index );

int main(){
	int n ; int a[100]; 
	int x ; int b[100];
	int y ; int c[100];
	int z ; int d[100];
	int t , index;
	cout << "nhap vao so phan tu: ";
	cin >> n;
	cout <<"nhap mang: ";
	Input (a , n );
	cout <<"xuat mang: ";
	Output(a , n); cout << endl;
	cout <<"kiem tra so nguyen to " << endl;
	int k = Nt(n) ;
		if (k){
			cout << n << " la so nguyen to " << endl;
		} else {
			cout << n << " khong la so nguyen to" << endl;
		}
	
	cout << "nhap mang B truoc khi gop! "<< endl;
	cout << "nhap vao so phan tu: ";
	cin >> x;
	cout <<"nhap mang: ";
	Input (b , x );
	
	cout <<"mang sau khi gop: " << endl;
	Gop_mang(a , n , b , x , c , y);
	Output(c , y); 
	cout << endl;
	
	cout << "tach mang vua gop " << endl;
	Tach_mang(c , y , b , x, d , z);
	cout << "mang nguyen to " ;
	Output ( b , x);
	cout << endl;
	cout <<  "mang khong nguyen to " ;
	Output (d , z);
	cout << endl;
	
	cout << "so lon nhat trong mang " << endl;
	cout << Max(a , n) << endl;
	
	cout <<"sap xep theo chieu tang dan " << endl;
	Sap_xep (a , n);
	Output(a , n) ;
	cout << endl;
	
	cout <<"them phan tu vao mang: " << endl;
	Them (a , n , index , t);
	Output (a , n) ;
	cout << endl;
	
	cout << "xoa phan tu trong mang " << endl;
	Xoa(a , n , index);
	Output(a , n) ;
	return 0;
}
void Input (int *a , int &n){
	for( int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
}
void Output(int *a , int n){
	for ( int i = 0 ; i < n ; i ++){
		cout << a[i] << " " ;
	}
}
bool Nt(int n){ 
	int tmp = 0;
	for ( int i = 2 ; i <= sqrt(n) ; i ++){
		if ( n % i == 0){
			tmp ++ ;
		}
	}
	if ( tmp == 0 ){
		return true ;
	}else {
		return false;
	}
}
void Gop_mang(int *a , int n , int *b , int x , int *c , int &y){
	y = 0 ; 
	for ( int i = 0 ; i < n ; i++){
		c[y] = a[i];
		y++;
	}
	for ( int i = 0 ; i < x ; i ++){
		c[y] = b[i];
		y++;
	}
}
void Tach_mang (int *c , int y , int *b , int &x , int *d , int &z){
	x = 0 ;
	z = 0 ;
	for ( int i = 0 ; i < y ; i++){
		if ( 1 == Nt(c[i]) && c[i] != 2){
			b[x] = c[i]; 
			x ++ ;
		}else {
			d[z] = c[i];
			z++;
		}
	}
}
int Max(int *a , int n){
	int max = a[0];
	for ( int i = 0 ; i < n ; i++){
		if ( max < a[i]){
			max = a[i];
		}
	} return max ;
}
void Sap_xep(int *a , int n){
	for (int i = n - 1 ; i > 0 ; i--){
		for ( int j = 0 ; j < i ; j ++){
			if (a[j] > a[i]){
				int tmp = a[i];
				a[i]   = a[j];
				a[j] = tmp;
			}	
		}
	}
}
void Them ( int *a , int &n, int index , int t ){
	cout << "nhap so va vi tri muon them: ";
	cin >> t >> index ;
	if (index > 0 && index <= n){
		for ( int i = n ; i > index ; i-- ){
			a[i] = a[i-1];
		} n++;
		a[index] = t ;
	}
}
void Xoa(int *a , int &n, int index ){
	cout <<"nhap vao vi tri muon xoa ";
	cin >> index ;
	if ( index > 0 && index <= n){
		for ( int i = index ; i < n-1 ; i ++){
			a[i] = a[i+1];
		} n--;
	}	
}


