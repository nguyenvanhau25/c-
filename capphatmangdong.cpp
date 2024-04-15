#include<iostream>
using namespace std;
int main(){
/* 
	- cap phat dong : heap .
		 cau truc : VD int *a = new int (5) - cap phat cho con tro a = 5 
	- luu tru cac bien toan cuc, cac doi tuong cua con tro khi dc cap phat dong 
	- sau khi cap phat dong ta dung : delete a ; de giai phong bo nho tranh default
	
	- stack: luu tru cac bien cuc bo
		VD: int a = 4
			int b[5]
	- stack trich xuat nhanh hon heap 
	- heap luu tru lon hon

	- cap phat mang dong : ung dung cho viec ko bt cap phat ptu la bao nhiu
*/
	
	int *b = new int[3]; // cap phat vung nho dc quan li boi con tro b 
	for(int i = 0 ; i < 3 ; i ++){
		b[i] = 1 ;  // cap tat cac ptu bang 1
	}
	cout <<"cac phan tu truoc khi them " << endl;
	for (int i = 0 ; i < 3 ; i++){
		cout << b[i] << " " ; // xuat mang
	} cout << endl;
	// tang mang b len 
	int *new_arr = new int[5] ; // tao 1 mang dong moi 
	
	// sao chep toan bo gia tri mang b cu sang mang moi new_arr
	for(int i = 0 ; i < 3; i ++){
		new_arr[i] = b[i];
	}
	new_arr[3] = 3;
	new_arr[4] = 4;
	// xoa vung nho cu
	delete[] b;
	
	// gan vung nho moi cho con tro b 
	b = new_arr;
	cout <<"cac phan tu sau khi them " << endl;
	for(int i = 0 ; i < 5 ; i ++){
		cout << b[i] << " " ;
	}
	
	
	
	
	
	
	

}
