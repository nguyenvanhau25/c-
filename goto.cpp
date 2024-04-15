#include<iostream>
#include <math.h>
using namespace std;
#define f 80
#define c 26.6667
int main(){
// goto : nhap lai
	int n ;
	cout << "nhap vao so nguyen duong chan " ;
 	try_again:
 	cin >> n;
 	if (n % 2 != 0 || n <= 0){
 		cout << "nhap sai roi anh oi " << endl;
 		cout << "nhap lai di "  << endl;
 		goto try_again;
 }
	cout << " nhap chuan r " << endl;
// bai tap chuong 3	
	float  a , b ;
	cout << "nhap vao he so cua phuong trinh" << endl;
	cin >> a >> b ;
	if (a == 0 && b == 0){
	 	cout <<"phuong trinh vo so nghiem" <<endl;
	}else if (a==0 & b != 0 ){
		cout <<"phuong trinh vo nghiem " << endl;
	}else if (a != 0) {
		cout << "phuong trinh co nghiem duy nhat " << endl;
		cout << "x = " << -b / a  << endl;
	}
// bai 2	
	int x , sum = 0 ;
	cout << "nhap vao so nguyen n " << endl;
	cin >> x;
	for(int i = 1 ;i <= x ; i ++){
		if (i % 2 == 1 ){
			sum += i ;			
		} 
	}
	cout << "tong cac so le " << sum << endl;
// bai 3
	float y ;
	cout <<"nhap vao nhiet do F " << endl;
	cin >> y;
	
	cout << "nhiet do degc = " << endl;
	cout <<  ((f - 32 ) / 1.8 ) << endl;

// bai 4 : kiem tra so nguyen to
	int k ; 
	cout <<"nhap vao so k " ;
	cin >> k;
	bool is_nt = true ;
	for(int i = 2 ; i <= sqrt(k) ; i++){
		if(k % i == 0 ){
			is_nt = false ;
			break;
		}
	}
	if (is_nt){
		cout << "n la so nguyen to " << endl;
	} else
		cout << "n khong phai nguyen to " << endl;
//bai 5: nhap so n .tinh tong cac chu so tao nen so do
	int l , sum1 = 0 ;
	cout <<"n = " ;
	cin >> l;
	while(l > 0) {
		sum1 += (l % 10);
		l = l/10;
	}
	cout <<"ket qua la " << sum1 << endl;
	
	int e ,  sum2 = 0;
	cout <<"n = " ;
	cin >> e;
	for (int i = 1 ; i <= e ; i += 0){
		sum2 += (e % 10);
		e = e/10;
	}	
	cout << "ket qua la " << sum2;
	
	return 0;
}
