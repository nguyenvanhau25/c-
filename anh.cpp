#include <iostream>
#include <iostream.h>
using namespace std;
int main()
{
float r = 2 ; // r l� t�n bi?n d�ng d? ch?a b�n k�nh
cout << "Dien tich = " << setiosflags(ios::showpoint) ;
cout << setprecision(3) << r * r * 3.1416 ;
return 0;
}

