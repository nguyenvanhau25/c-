#include <iostream>
#include <iostream.h>
using namespace std;
int main()
{
float r = 2 ; // r là tên bi?n dùng d? ch?a bán kính
cout << "Dien tich = " << setiosflags(ios::showpoint) ;
cout << setprecision(3) << r * r * 3.1416 ;
return 0;
}

