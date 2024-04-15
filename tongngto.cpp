#include <iostream>
#include<math.h>
bool is_prime(int n)
{
    for(int i = 2 ; i < sqrt(n); i++){
        if( n % i == 0 )
            return false ;
    } return true ;
}
/*
int total_prime(int numbers[10], int n)
{
    int sum = 0 ;
    for(int i = 0 ; i < n ; i ++){
        for(int x = 1 ; x <= sqrt(numbers[i]) ; x ++){
            if(numbers[i] % x == 1 ){
            
                sum += numbers[i] ;
            }
        }
    } 
	return sum  ;
    return 0;
}
*/
int total_prime(int number[10] , int n)
{
	int sum = 0 ;
	for(int i = 0 ; i < n ; i ++){
		if(number[i] % 2 == 1 )
		{
			sum += number[i]; 
		}
	}	return sum ;
	return 0 ;
}
int main()
{
    int n;
    int numbers[10];

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << total_prime(numbers, n);

    return 0;
}

