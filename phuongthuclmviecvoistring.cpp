#include<iostream>
#include<string>
using namespace std;
/*
  	- str.substr(x , y)  : lay ra 1 chuoi con co do dai y ki tu va bat dau tu index x 
  	- str.find("s")  : truyen vao "s" 1 chuoi xog no se tim kiem va tra ve
  	- str.erase(x , n)  : xoa di N ki tu bat dau tu index X
  	- str.replace(x,n,s)  : thay the N ptu cua chuoi bat dau tu index X bang chuoi S
  	- str.compare(s)  :so sanh STR voi chuoi S:str = s => tra gtri 0,str > s => 1;str < s => -1  
  	- str.insert(x,s)  : chen chuoi S vao index X
  	- str.length() = str.size() : dem tong so luong bite . 4 ki tu 'abcd' chiem 4 bite => length = size = 4
*/



int main(){
	int choice ;
	cout << "nhap vao truong hop ";
	cin >> choice;
	switch (choice){
		case 1:
			{
				string str = "12345";
				string str1 = str.substr(1 , 3);
				cout << str1;
			} break;
		case 2 :
			{
				string str = "abcd" ;
				string str1 = "cd" ; //cach 2
				cout << str.find("a") <<" " << str.find("b") << endl;
				cout << str.find(str1) ; 	
			}break;
		case 3:
			{
				string str = " a b c d" ;
				str.erase( 2 , 2 ) ;
				cout << str;	
			} break;
		case 4:
			{
				string str = "1234567" ;
				str.replace( 3 , 3 , "abc" );
				cout << str;
			} break;
		case 5:
			{
				string str1 = " abcd " ; // dung ma ascii
				string str2 = " b " ;	// so sanh tung cap gtri cai nao lon hon ket luan luon
				cout << str1.compare(str2) ;	
			} break;
		case 6 :
			{
				string str = "1234";
				str.insert(1 , "**") ; // chen vao index 1
				cout << str;
			} break;
	}
	
	
	
	return 0;
}
