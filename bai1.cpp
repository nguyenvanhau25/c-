#include<iostream>
#include<math.h>
using namespace std;
int main(){
//	cac ham toan tu, tri td o ham math.h
//	ctrinh chi chay dc 1 ham main		
//	int n ;
//	cout << " nhap vao gia tri cua n la : ";  cin >> n;
//	if((n >= 100) && (n <= 105)){
//		cout << "n n";
//	}else if (n == 10) {
//		cout << " ll ";
//	}else if ( n == 5){
//		cout << " 5 ";
//	}else {
//		cout << " khac " ;
//	}
// else if se dung khi gap dung
// if long if thi se chay het 

//	int th;
//	cout<< " nhap vao truong hop ";
//	cin >> th ;
//	switch(th){
//		case 1: cout<< "1 ";
//		break;
//		case 2: cout<< "2 ";
//		break;
//		case 3: cout<< "3 ";
//		break;
//		default: cout << "ko hop le ";
//	} 
//	for( int i ;i <= 100 ; i += 5){
//		cout << i << endl;
//	}	
//	for( int i ; i <= 100 ; i++){
//		if( i % 5 == 0 ){
//			cout << i <<endl;
//		}
//	}
//	2 cach de tim bai chia het cho 5
//	a ga b cho  
	int a , b ;
	for( a =1 ; a < 36 ; a++ )
		for( b = 1 ; b < 25 ; b++)
			if( a + b == 36 && (2*a + 4*b == 100))
				cout << "so ga " << a << ", so cho" << b;
			
		
	

	return 0;
}


