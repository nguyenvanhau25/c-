#include<iostream>
#include<string>
  // string - chuoi ki tu
using namespace std;
int main(){
	// char c = 'a' : luu 1 ki tu
	// string luu nhieu ki tu
	int choice ;
	cout << "bai muon lam la " ;
	cin >> choice;
	switch (choice ){
		case 1 :
			{
				string chuoi = "hello word" ;
				cout << chuoi ;	
			} break;
		case 2 ://nhap dung cin thi khi co dau cach or enter cham dut chuoi
			{
				string chuoi;
				cout << "nhap chuoi: " ;
				cin >> chuoi;
				cout <<"chuoi sau khi nhap la " ;
				cout << chuoi;
			} break;
		case 3:
		// nhap duoc nhieu ki tu
			{   
				cin.ignore(); 
		// khi nhap cin o lenh trc thi du lieu duoc ghi vao bo nho 
		// vi the ma cau lenh getline se khong duoc hoat dong
		// dung cin.ignore() ; de xoa bo nho dem
				string str;
				getline(cin , str);
				cout << str;
			} break;
		case 4: // truy xuat cac phan tu trong string
			{
				string str = "Hello anh hau";
			// string la cac chuoi mang don le . ta cu coi no giong char
				cout << str[3] ;
				str[2] = 'L' ; cout <<endl;
			// gan gia tri va nho dung dau ''
				cout << str;							
			} break;			
		case 5 :
			{
				
			}
				
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
}
		return 0;		
}
