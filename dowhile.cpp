#include<iostream>
using namespace std;
int main(){
// tinh tong tu 1-n
	int a ; int n;
	cout <<  "nhap vao so muon tinh tong ";
	cin >> n;
	int tong = 0 ;
	do {
		tong += a ; // tong = a + tong
		a++;
	}while (a <= n );
	cout << "tong tu 1 - " << n << endl << tong <<endl;
// break dung de thoat khoi 1 vong lap
	 int n1 = 0 ;
	 while ( n1 <= 10)
	 {
	 	n1++; 
	 	cout << " n1 trong vong lap = " << n1 <<endl;
	 	if(n1 == 4)
	 		break; 
	 }	
	 cout << "gia tri cuoi cung  = " << n1 << endl;

//continue bo qua 1 gtri trong vong lap
// tinh tong tu 1-5 tru so 3
	int tong1 = 0;
	for ( int a1 = 0 ; a1 <= 5; a1 ++)
	{
		if ( a1 == 3)
			continue;		
		else
		 {
		cout << " a1 = " << a1 << endl;
		tong1 += a1 ;	
		 }
	}
		cout << tong1 << endl;
	
// tinh giai thua 	
	int n2 , gt = 1 ;
	cout << "nhap vao so can tinh " << endl;
	cin >> n2 ;
	for (int i = 1 ; i <= n2 ; i ++){
		cout << i << endl;
		gt *= i ;
	} cout << gt << endl;
	// dung while
	int i = 1 ;
	while ( i <= n )
	{
		gt *= i ; 
		i ++ ;
	}
	cout << gt << endl;
	
// for long nhau 15.6
// de ve hinh la dung ma tran
// ve chu N 
	for (int x = 1 ;x <= 7 ; x++){
		for (int j = 1 ; j <= 7 ; j ++){
			if( j == 1 || j == 7 || x == j )
				cout << i << j << " " ;
			else 
			cout << "  " << " ";
		}
		cout << endl;
		}
			
	return 0;
}
