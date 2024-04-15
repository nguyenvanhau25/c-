#include <iostream>
#include<math.h>
/*
unsigned long long factor(int n)
{
    if(n <= 1 ){
		return 1 ;
	}
	return n * factor(n - 1 ) ;
}
*/
// ktra so ngto
bool ngto( int n )
{
	for(int i = 2 ; i <= sqrt(n) ; i++)
	{
		if(n % i  == 0 )
		{
			return false ;
		}
	} 
	return true ;		
}
int tong(int n){
	if(n == 1 ){
		return 1 ;
	}return n + tong(n-1);
}

int main(){

/*
{
    int n;

    std::cin >> n;
	if(ngto(n))
	{
		std::cout <<n << "la so nguyen to" << endl;
	}else {
		std:: cout << n << "khong la so nguyent to" <<endl;
	}
*/	
	int x ;
	std::cin >> x; 
	int kq = tong(x);
	std:: cout << tong;
    return 0;
}
