#include<iostream>
using namespace std ;
int main(){
/*	int a, b;
	a = 5 ;
	b = 6 ;
	cout <<"a + b = "<< a + b;
*/
 #include <iostream> 
 /*
 {
	 int b; 
	 cout<<"Enter a value:"; 
	 cin>>b; 
	 if (b == 5) 
	 	cout<<" the value is nagative\n";
}

*/
100*/
#include<iostream>
using namespace std;
#define TONGSOTIEN 1000
int main()
{ 
int i, j, k, soluong = 0;
for(i=0; i<=TONGSOTIEN/500; i++)
for(j=0; j<=TONGSOTIEN/200; j++)
for(k=0; k<=TONGSOTIEN/100; k++)
if((i*500 + j*200 + k*100 ) == TONGSOTIEN)
{
		cout<<" "<<i<<"*500 + "<<j<<"*200 + 
			"<<k<<"*100\n";
				soluong++;
}
		cout<<" ==>> Co tat ca "<<soluong<<" phuong an\n";

}	
	
	
	return 0 ;
}
