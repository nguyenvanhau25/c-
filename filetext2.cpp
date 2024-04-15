#include<iostream>
#include<fstream>
using namespace std;

struct Person{
	string name ;
	int age;
	
	Person(){
	}
	Person(string _name , int _age){
		name = _name;
		age = _age;
		
	}
};
int main(){
	// tao ra 1 mang 2 ng va cap phat dong cho no
	Person *persons = new Person[2] ;
	persons[0] = Person ("hau" , 24);
	persons[1] = Person ("hoang" , 30);
	fstream fs;
	fs.open("file.txt");
	if(!fs.is_open()){
		cout <<"mo that bai ";
		return 1 ;
	}
	// luu du lieu mang vao file
	for(int i = 0 ; i < 2 ; i++){
		fs << persons[i].name << endl;
		fs << persons[i].age << endl;
	}
/*	
	// lay du lieu tu file 
	for (int i = 0 ; i < 2 ; i ++){
		getline(fs,persons[i].name);
		fs >> persons[i].age;
		fs.ignore();
		}
*/		
	return 0 ;
}
