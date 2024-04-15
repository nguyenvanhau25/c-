#include<iostream>
#include<string>
#include<math.h>
using namespace std;
void input_integer(string label , int &n );
bool ngto(int n);
int sum_of_ngto(int n );
int sum_of_ngto_with_dequy(int n );
long long giaithua(int n ); 
int main(){
	int n ;
	input_integer("n = " , n);
	cout << sum_of_ngto( n ) <<endl;
	cout << sum_of_ngto_with_dequy( n ) <<endl;
	cout << giaithua(n) << endl;
	if(ngto(n)){
		cout << n << " la so nguyen to " << endl;
	}else
		cout << n <<" khong phai so ngto" << endl;
	
		return 0 ;
}
void input_integer(string label , int &n )
{
	cout << label ;
	cin  >> n ; 
}
bool ngto(int n ){
	for (int i = 2 ; i <= sqrt(n) ; i ++){
		if( n % i == 0 ){
			return false;
		}
	} return true ;
}
int sum_of_ngto(int n ){     // dung vong lap
	int sum = 0;
	for(int i = 2 ; i <= n ; i ++){
		if( ngto(i)){
			sum += i ;
		}
	} return sum ;	
}
int sum_of_ngto_with_dequy(int n ){
	if(n == 2){
		return 2;
	}
	if(ngto(n)){
		return n + sum_of_ngto_with_dequy( n - 1 );
	}
	return sum_of_ngto_with_dequy(n - 1);
}
long long giaithua(int n ){
	if(n == 1 ){
		return 1 ;
	} return n *giaithua(n - 1 ) ;
}
