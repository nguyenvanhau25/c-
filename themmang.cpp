#include<iostream>
using namespace std;
void Them(int a[] , int &n, int index , int x);
int main(){
	int a[5] = { 1 , 2 ,4 ,5 ,6 } ;
	int  n,  index , x;
	Them(a , n , index , x);

	return 0;
}
void Them(int a[] , int &n, int index , int x){
	cout << "nhap vi tri muon them: " ;
	cin >> index;
	cout << "nhap so muon them: ";
	cin >> x;
	for ( int i  = 4  ; i > 0 ; i--){
		a[i ] = a[i - 1];		
	}
	a[index] = x;
	n ++;
 for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
/*
	int k , h ;
	int mang[k];
	cout <<"nhap vao so phan tu n = " ; cin >> k ;
	for (int i = 0 ; i < k ; i++ ){    //nhap mang
		cin >> mang[i];
	}
	cout <<"nhap vao vi tri muon xoa: "; //xoa vi tri 
	cin >> h ;
	for (int i = h ; i < k - 1 ; i ++){
		mang[k] = mang[ k+1 ]; // dung for de dua cac index len tren 
	}
	k--; // xoa bo 1 index
	
	cout <<"mang sau khi xoa: "; // xuat mang
	for(int i = 0 ; i < k ; i ++){
		cout << mang[i] << " " ;
		cout << endl;
	}
	*/
