#include<iostream>
using namespace std;
 // de quy
 // tuc la goi ham A trong chinh ham A do
 
 void print(int value)
 {
 	cout << "value = " << value << endl;
 	if ( value == 1 ){
 		return  ;
	 }
	 print (value - 1 );
 }
 
 // tinh tong s = 1 + 2 .. + n
 int  tong(int n ){
 	if ( n == 1 )
	 {
 		return 1 ;
	 }
	 return n + tong (n - 1 );
 }
 int main(){
 	int n ;
 	cin >> n ; 
 	print(n);
 	cout << "tong bang " << tong( n );
 }
