#include <iostream>
using namespace std;

//	Kieu_dulieu tenmang[So luong phan tu cua mang];
//	truy cap cac phan tu o mang=> chi so: n (index)
//	 n chay tu 0 -> n-1 
//	 vd: o mang int a thi n0 = 4, n1 = 3 ,...
//	 goi phan tu : tenmang[index]
//	index bat dau tu 0
 int main(){
//	nhap mang va duyet mang
	int n;
	cout<< " nhap vao so phan tu: ";
	cin >> n ;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i]; // nhap gia tri cho phan tu o chi so i
	}
	for(int i = 0 ; i < n ; i++){
		cout << a[i] << " "; // duyet mang
	}
 	
 	return 0;
 }
