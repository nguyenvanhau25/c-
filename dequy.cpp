#include<iostream>
using namespace std;

int Giaithua(int n){
	if ( n <= 1)
		return 1;
	return n * Giaithua(n - 1);
}
// ham fibonacci





int main (){
	
	int kq = Giaithua(6);
	cout << kq << endl;
	
}
