#include<iostream>
#include<math.h>
// truyen tham bien: co thay doi bien sau khi goi ham
// truyen tham tri: khong thay doi bien sau khi da ket thuc ham

using namespace std;
void bien(int &a ){
	a = 100 ;
	cout << " a trong ham gia tri la " << a << endl;
}

int main(){
		int a = 1;
	cout << "truoc khi truyen gia tri a = " << a <<endl;
	bien ( a );
	cout << " sau khi truyen gia tri " << a ;
}
