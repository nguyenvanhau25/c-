#include<iostream>
using namespace std;
/*
			TINH TRUU TUONG 
		- Truu tuong hoa lm cac doi tuong , thuoc tinh cua chung thanh cac mo hinh
			don gian hon
		- giups tap trung vao doi tuong quan trong va bo qua cac yto ko qtr khac
		- lm don gian hoa code

*/

class Animal // Abstract class : lop truu tuong
{
public:
	virtual void make_sound() = 0 ; // phuong thuc thuan ao
	virtual void move() = 0 ;
		
};
class Cat : public Animal{
public:
	void make_sound(){
		cout <<"Cat make sound " << endl;
	}
	void move(){
		cout <<"Cat move " << endl;
	}
};
class Dog : public Animal{
public:
	void make_sound(){
		cout <<"Dog make sound " << endl;
	}
	void move(){
		cout <<"Dog move " << endl;
	}
};

int main(){
	Dog dog ;
	Cat cat;
	
	dog.make_sound();
	dog.move();
	cat.make_sound();
	cat.move();
	return 0;
}
