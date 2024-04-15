#include<iostream>
#include<string>
using namespace std;

// class , object
//  class : coi nhu ban thiet ke
// object: doi tuong va doi tuong the hien cai class

// 1 con nguoi , ten: Nguyen Van A , tuoi: 28, dia chi: HN

class Person
{ 
public: // cong khai.cac thuoc tinh(properties) co the truy cap o trong va ngoai class
	// properties
	string name ;
	int age;
	string address;
	
	//constructor:ham khoi tao : luon chay khi ham class dc goi
	Person(){} 
	
	Person(string _name , string _address){
		name = _name ;
		address = _address;
	}
	// methods
	// hanh vi con ng 
	void work(){
		cout << name <<" is working " << number << endl;
	}
private: // rieng tu. moi thu chi dc dung trong pham vi class
	string number = "mot hai";


};

int main(){
	Person person1;  // object
	person1.name = "nguyen van a" ;
	person1.age = 28;
	person1.address = "ha noi" ;
	cout <<person1.name << endl << person1.age << endl << person1.address<< endl;
	person1.work();
	return 0;
}
