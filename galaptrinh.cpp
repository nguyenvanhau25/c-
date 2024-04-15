#include<iostream>
#include <math.h>
using namespace std;
int main(){
	short a = 10 ;
	int b;
	b = a ; // ep kieu tat 
	b = (int)a; // ep tuong minh 
	cout << b << endl;
	
	int c = 5;
	float d = 10.5;
	cout << ( c==d) << endl ; //so sanh 2 so. true=1 false =0 

// toan tu 3 ngoi (toan tu gan )	
	int a1;
	cout << " nhap vao gia tri : ";
	cin >> a1;
	string chanle = ( a1 % 2 == 0 ) ? " chan " : " le " ; // string with word . int float... with number
	cout << chanle << endl;

	float a2;
	cout << " nhap vao diem trung binh :";
	cin >> a2;
	string danhhieu = ( a2>8 )?"gioi" : (( a2 >= 6.5 ) ? "kha" :(( a2>=5 ) ? "trung binh" : "yeu"));
	cout << danhhieu << endl;
	
//switch case
	int truonghop;
	cout << " nhap vao truong hop can tim : ";
	cin >> truonghop;
	switch ( truonghop ){
		case 10 :
			for ( int i = 0 ; i < truonghop ; i++){
				cout << "hau anh " << endl; 
			}break;
			
			 break;
		case 2 : 
			cout << " hello word " <<endl;
			break;
		default :
			cout << " tan chau " << endl;
		
	}
	
	
	int x ; 
	cout << " moi nhap gia tri x : ";
	cin >> x; 
	while ( x <= 5){
		cout << " xx " << endl;
		x++ ; // x = x + 1 , x += 1 
	}
	





	
	return 0;
}
