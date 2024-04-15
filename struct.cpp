#include<iostream>
#include<string>
using namespace std;
	
	// struct : kieu du lieu do nguoi dung tu dinh nghia
	// khac vs mang : cau truc co the chua nhieu kieu du lieu khac nhau (int , float , string,..
	
struct Student{
	// properties : cac thuoc tinh
	string name;
	int age;
	
	
	// goi 1 ham khoi tao o co tham so de tranh loi 
	// khi goi o ham main ma ko truyen gia tri 	
	Student (){}
	
	//constructor : ham khoi tao
	// constructor la ham tu dong thuc hien khi goi ham
	// muc dich chinh: khoi tao cac bien thanh vien trong class do
	//ten ham khoi tao phai trung voi ten cua class
	// ham ko mang kieu du lieu -> ko dung void khi khai bao no
	// ham khoi tao co the cung cap du lieu cho cac bien o tren 
	// goi ham khoi tao dau tien va no gan cac thuoc tinh cho cac bien o ben tren 
	Student (string _name , int _age){
		name = _name;
		age = _age;
		
	// khi dung ham khoi tao thi o phan dinh nghia phai khai bao gia tri 
	
	}
	
	
	// methods : cac phuong thuc (cac ham ,... )
	void run(){
		cout << name << " running..." <<endl; // truy xuat dc cac du lieu trong ham 
	}
	
	
};
int main(){
	Student student_1; // dinh nghia 
//	Student student_1 { "hau" , 18 };   gan luon gia tri neu nhu khong can nhap 
//	Student student_1 = Student{"hau" , 18}; toan tu gan
	
	cout << "nhap ten: " ;
	getline(cin , student_1.name) ;
	cout <<"nhap tuoi: " ;
	cin >> student_1.age ;
	cout <<"ten la: " << student_1.name <<endl;
	cout <<"tuoi la: " << student_1.age <<endl;
	
	student_1.run() ;
	
}
