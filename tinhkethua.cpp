#include<iostream>
using namespace std;
/*
	 	TINH KE THUA 
	1 class a co the ke thua cac thu tu class b
	cac code co tinh chat giong nhau thi dung ke thua tu class cha
	kieu ke thua: pubilc , protected , private .
*/

class Animal{ // class cha
public:
	float weight;
	
	void run(){
		cout <<"animal is running " << endl;
	}
};
class Pet {
	int age;
};
// kieu ke thua - class ke thua 1 , kieu ke thua - class ke thua 2
class Cat : public Animal, public Pet // cat ke thua het tu animal ( class con )
{
public:
	string name;
	
	void feed(){
		cout <<"cat is eat..." << endl;
	}
};

int main(){
	Cat cat;
	cat.weight = 30;
	cat.name = "bo";
	
	cout << cat.name << endl;
	cout << cat.weight << endl;
	
	cat.run();
	
	
	return 0;
}
