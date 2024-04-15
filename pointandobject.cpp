#include<iostream>
#include<string>
using namespace std;
/*
	con tro va object
	
	
*/

class Cat{
private:
	string name ;
	int age;
	
public:

	Cat(){
	}
	
	// thay vi phai dat ten khac voi properties
	// ta co the dung con tro this	tham chieu toi doi tuong ta dang lm viec
	// luc nay this chinh la  Cat o duoi ham main
	Cat(string name , int _age){
	this->name = name;
		age = _age;
	}
	// tao getter de lay ra du lieu
	string get_name(){
		return name;
	}
	int get_age(){
		return age ;
	}
};

int main(){
	Cat *cat = new Cat("meo" , 2 ); // tao vung nho tren heap
/*	
	Cat cat("bo" , 2); // da tao 1 vung nho tren stack
	cout <<"name: " << cat.get_name() << endl;
	cout << "tuoi: " << cat.get_age()<< endl;
*/
	cout <<"name: " << cat->get_name(); // dung mui ten giong voi struct
// hoac : cout << (*cat).get_name();

	cout <<" tuoi: " << (*cat).get_age();





	return 0;
}
