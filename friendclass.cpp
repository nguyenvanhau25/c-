#include<iostream>
#include<vector>
using namespace std;

/*
		LOP BAN - FRIEND CLASS 
	- class B hoan toan co quyen truy suat den class A neu B friend A	
	
		VECTOR
	- vector tao ra mang dong co kha nang tu thay doi kich thuoc 
		khi 1 ptu dc chen, them ,lay ra , xoa tuy thuoc vao nhu cau 
	

class B;
class A{
private:
	int x = 4;
	friend B;
};

class B
{
public :
	void print_x (A a){
		cout << a.x ;
	}
};
*/
int main(){
	
//	B b ;
//	b.print_x(A());
	
	vector<int> numbers ;  // vector < kieu du lieu > ten mang
	
	// them ptu vao cuoi
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	// numbers.size : tra ve so luong ptu cua mang 
	for(int i = 0 ; i < numbers.size() ; i++ ){
		cout << numbers[i] <<" " ;
	} cout << endl;
	
	// xoa ptu ( begin se la index = 0 )
	numbers.erase(numbers.begin() + 1 ) ;
	for(int i = 0 ; i < numbers.size() ; i++ ){
		cout << numbers[i] <<" " ;
	} cout << endl;
	#
	return 0;
}
