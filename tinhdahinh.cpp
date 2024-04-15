#include<iostream>
#include<math.h>
using namespace std;
/*
		TINH DA HINH (NAP CHONG VA GHI DE) : nhieu hinh thai khac nhau 
	De the hien tinh da hinh ta co 3 cach:
	- Nap chong :
		- Nap chong ham: trong 1 class co the dinh nghia cac phuong thuc trung ten
						nhung khac nhau ve tham so truyen vao , logic  
		- Nap chong toan tu
	- Ghi de : 		
	- Phuong thuc ao: virtual
	khi class cha so huu 1 virtual thi class con co the dinh nghia lai phuong thuc no
	khi do class cha dung con tro tro toi class con thi no se lay phuong thuc cua class con
*/

		// GHI DE
class Animal{
public:
	void move(){
		cout <<"Animal move " << endl;
	}
};
class Dog : public Animal
{
public:
	void move(){
		cout <<"Dog move " << endl;
	}
	void parent_move(){
		Animal::move() ; // goi tu class Animal
	}
};

		// PHUONG THUC AO
class Cat {
public:
//	virtual void move() = 0 ; thuan ao
// ko the tao doi tuong cho class khi class so huu thuan ao
	virtual void move(){   // VIRTUAL 
		cout <<" meo con chay " << endl;
	}
};

class Monkey : public Cat {
public:
	void move(){ 		// dang ghi de
		cout <<" khi move " ;
	}
};
class Calculator{
public:  
	// nap chong ham
	int add(int a , int b ){
		cout <<" int" << endl;
		return a + b ;
	}
	int add(float a , float b ){
		cout << "integer " << endl;
		return a + b ;
	}
};
int main(){
	Calculator cal;
	
	int a = 1 , b = 2 ;
	float c = 1.4 , d = 6.5;
	
	cout << " a + b = " << cal.add(a , b ) << endl;
	cout << " c + d = " << cal.add(c , d) << endl;
	
	Cat *cat = new Monkey; 
	// vi monkey dang ke thua tu Cat len co the coi class Monkey la Cat
	cat->move();
	
	return 0 ;
}
