#include<iostream>
#include<string>
using namespace std;

struct Date{
	int day;
	int month ;
	int years;
	Date (){
	}
	Date(int _day , int _month , int _years){
		day = _day;
		month = _month ;
		years = _years;
	}
};

struct Students {
	string name ;
	int age;
	Date sinhnhat ; // goi 1 struct trong 1 struc khac . goi struct date va dat ten la sinhnhat
	
	Students() {} // tao 1 ham khoi tao rong de tranh loi khi ta ko nhap luon gtri
	
	Students (string _name , int _age , Date _sinhnhat) {
		name = _name ;
		age = _age;
		sinhnhat = _sinhnhat;
	}
	void print(){
		cout <<"ten: " << name << " , tuoi: " << age ;
		cout <<", ngay sinh: " << sinhnhat.day << " / "  << sinhnhat.month <<"/ " <<sinhnhat.years ; 
	}
};
int main(){
	Students students[3]= {
		Students(" hau " , 18 , Date( 1 , 1 ,2020 )) ,
		Students(" hoang " , 19 , Date( 2 , 3 , 2005 )) ,
		Students (" dat " , 17 , Date(2 , 5 , 2002 )) 
	};
	for (int i = 0 ; i < 3 ; i++){
		students[i].print() ;
		cout << endl;
	}
	
	
	
	return 0 ;
}
