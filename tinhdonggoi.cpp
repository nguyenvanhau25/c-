#include<iostream>

using namespace std;
/*
	- tinh dong goi
	giup giu dc cac thuoc tinh private
	giup tang tinh bao mat 
	ko the truy cap tu ben ngoai ma phai thong qua cac phuong thuc ma class
	cho phep (getter , setter ,..)	
	
*/
class Square{
private:
	float side_length;

// tao cac phuong thuc
public:
	// tao settor : tao du lieu de nhap
	void set_side_length(float _side_length){
		side_length = _side_length;
	}	
	 // tao getor : in du lieu ra 
	float get_side_length(){
		return side_length;
	}
};
int main(){
	
	Square s1;
	s1.set_side_length(1.4); //nhap du lieu
	cout <<"Side length " << s1.get_side_length();
	
	return 0;
}
