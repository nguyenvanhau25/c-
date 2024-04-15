#include<iostream>
#include<math.h>
using namespace std;

void giaipt(double a , double b , double c);
void bien( double x , double y , char dau );
int main(){
	double a , b , c ;
	double x , y;
	char dau ;
	cout << " nhap vao so x " << endl;
	cin >> x;
	cout << "moi nhap vao so y " << endl;
	cin >> y;
	cout << "moi nhap phep tinh " << endl;
	cin >> dau ;
	bien(x , y , dau);
	
	
	
	
	cout << " nhap vao so a " ;
	cin >> a;
	cout << " nhap vao so b " ;
	cin >> b;
	cout << " nhap vao bien c ";
	cin >> c ;
	giaipt(a , b ,c );
	cout << giaipt ;
	return 0;	
}
void giaipt(double a , double b , double c){
	double x1 ; double x2;
	double delta = (b*b) - (4*a*c);
	if (delta > 0){
		cout << " pt co 2 nghiem " << endl;
		cout << (- b + sqrt(delta)) / (2*a )<< endl ;
		cout << ( b + sqrt(delta)) / (2*a ) << endl;
	}else if ( delta == 0 ){
		cout << "pt co 1 nghiem " << endl;
		cout << (-b /(2*a)) << endl;
	}else
		cout << " pt vo nghiem " << endl;
}

void bien( double x , double y , char dau ){
	switch (dau){
		case '+' : cout << "a + b = " << x + y << endl;
		break;
		case '-' : cout << "a - b = " << x - y << endl;
		break;
		case '/' : cout << "a / b = " << x / y << endl;
		break;	
		case '*' : cout << "a * b = " << x * y << end;
		break;
		
	}	
}

