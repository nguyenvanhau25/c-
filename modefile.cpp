#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream fs;
	
	ifstream ifs ; // cac class. class nay chi read (ios::in)
	ofstream ifs ; // cac class. class nay giup mo file va ghi file (ios::output)
	
	
	fs.open("modefile.txt" , ios::in ); // mode only read file
	fs.open("modefile.txt", ios::out); // xoa nd file cu va neu ch co file thi tu tao file
	fs.open("modefile.txt" , ios::out|ios::trunc);
	
	string name ;
	getline(fs , name);
	cout << name;
	
	fs << "hau";
	
	return 0 ;
}
