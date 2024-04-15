#include<iostream>
#include<fstream>
// thu vien lm viec voi file

using namespace std;
	// tao 1 file text documents (duoi txt)
	// lm viec voi file
	// 2 chuc nang chinh: read / write File
int main(){
	fstream fs;
	fs.open("text.txt"); // mo file truc tiep
	if(fs.is_open()){
		cout <<"mo file thanh cong" << endl;
	}else {
		cout <<"mo file khong thanh cong " << endl;
		return 1; // la de bao thuc hien xog cau lenh if else
	}
/*	
	// mo file khi o trong 1 folder khac ..
	// copy duong dan cua folder
	// them thanh 2 gach va ghi txt muon open vao cuoi 
	fs.open("E:\\dev\\lamviecvoifile\\test.txt");
	if(fs.is_open()){
		cout <<"mo file thanh cong" << endl;
	}else {
		cout <<"mo file khong thanh cong " ;
		return 1; 
	}
*/	
	// GHI FILE
	fs << "Hello World " ; // in lenh vao file
	cout <<"Hello World " ; // in lenh ra man hinh console
	
	// DOC FILE 
	string str;
	int a ;
	getline( fs , str); // lay du lieu tu file gan vao str
	getline(cin , str) ; // nhap vao tu ban phim
	cout << str;
	fs >> a;
	fs.close(); // dong file 
	return 0 ;
}
