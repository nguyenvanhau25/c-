#include<iostream>
using namespace std;
 
// con tro - pointer : dot nhap vao vi tri luu tru (vung nho) va co the thay doi gia tri khai bao
// contro chi luu tru dc dia chi
// & : toan tu vi tri luu tru
void pointer1(int *i){
	cin >> *i;
}
int main (){
	int n = 5 ;
	cout << &n << endl;
	 //  dia chi luu tru n
	int *contro = &n ;
	 //kieu du lieu * ten bien = dia chi
	*contro = 7;	 
	  // thay doi gia tri 
	cout << *contro << endl ; 
	cout << n << endl;
	 // n sau khi dc thay doi
	int mang[4] = {1 , 0 , 3 , 4};
	int *pointer;
	for(pointer = &mang[0] ; pointer < &mang[0] + 4 ; pointer ++){
		cout << *pointer <<" "  ;
		 // goi cac gia tri cua mang
	}cout << endl;
	int i = 5 ;
	 // tao i = 5 truoc khi dung tro voi mang
	pointer1( &i);
	cout << "i = " << i << endl ;
	// dung con tro de thay doi gia tri cua i 
} 
