#include<iostream>


bool isPrime(int number) {
    // Prime numbers are greater than 1
    if (number <= 1) {
        return false;
    }

    // Check divisibility from 2 to square root of the number
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // Not a prime number
        }
    }

    return true; // Prime number
}

int main() {
    int num;
 //   std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPrime(num)) {
        std::cout <<"1";
    } else {
        std::cout <<"0";
    }
//	int kq ;
//	kq = isPrime(num);
//	std::cout <<isPrime;
}
