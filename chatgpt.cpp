#include<iostream>
#include<math.h>
using namespace std;

def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def total_prime(arr, n):
    total = 0
    for i in range(n):
        if is_prime(arr[i]):
            total += arr[i]
    return total

//Test the functions
arr = [2, 3, 4, 5, 6, 7, 8, 9, 10]
n = len(arr)
print("Total prime sum:", total_prime(arr, n))

