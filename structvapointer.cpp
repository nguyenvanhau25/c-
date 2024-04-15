#include<iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	int age ;
	Student(){
	}
	Student (string _name , int _age){
		name = _name;
		age = _age;
	}
};
int main(){
	Student student ("hau " , 21 ) ;
	// tao vung nho tren stack
	Student *student_ptr = &student; 
	// hoac cap phat dong: = new Student("hau" , 21 )
	// tao vung nho tren heap 
	// khi dung xog t phai giai phong vung nho
	cout <<(*student_ptr).name ;
// hoac cout << student_ptr ->name ;
	delete student_ptr;


}
