#include <iostream>
using namespace std;
const float PI = 3.14;

struct Circle{
	float r ;
	
 // dung nap chong de nhap r
 	friend istream &operator >> (istream &is ,Circle &circle){
 		cout <<"nhap ban kinh: ";
 		is >> circle.r;
 		return is ;
	}
 // goi ham tinh chu vi 
 	float chu_vi (){
 		return 2 * PI * r ;
	 }
// ham tinh dien tich
	float dien_tich(){
		return PI * r * r ;
	}
	
};


int main(){
	Circle circle ;
	cin >> circle ;
	cout <<"chu vi tam giac: " ;
	cout << circle.chu_vi() << endl;
	cout << "dien tich tam giac: ";
	cout << circle.dien_tich() << endl;
	
	
	return 0;
}
