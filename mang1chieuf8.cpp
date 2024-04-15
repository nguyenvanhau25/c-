#include<iostream>
using namespace std;
int main(){
	// < kieu du lieu > < ten mang >[ so luong ptu ]
	// nhap mang va xuat mang 
	int number[2 ];
// nhap mang
	for (int i = 0 ; i < 2 ; i++){
		cout << "number[" << i << "] " ; // viet chu 
		cin >> number [i]; // nhap chi so: i la index
	}
// xuat mang	
	for (int i = 0 ; i < 2 ; i++){
		cout <<"number[" << i <<"] " << number [i] << endl ;
	}
	
// nhap mang n ptu va in ra them x o cuoi
	int n , x;
	int numbers[n];
	cout << " n = " ; cin >> n;
	cout << " nhap mang: " ;
	for (int i = 0 ; i < n ; i++){
		cin >> numbers[i];
	}
	cout << " x = " ; cin >> x;
	numbers[n] = x ;
	n++;
	cout <<"mang sau khi them: ";
	for (int i = 0 ; i < n ; i ++){
		cout << numbers[i] <<" " <<endl;
	}
// nhap mang va xoa vi tri index muon xoa
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
	return 0;
}
