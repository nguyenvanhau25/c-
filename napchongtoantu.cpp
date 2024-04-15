#include<iostream>

using namespace std;

// nap chong toan tu - operator overloading

struct Point {
	int x ;
	int y ;

// nhap la istream la can chuyen tham chieu 
// friend <kieu tra ve> operator <toan tu > (cac doi so chuyen vao)
// giong nhu ham 
	
	friend istream& operator >> (istream &is , Point &p ){
		cout <<"x = " ;
		is >> p.x;
		cout << "y = ";
		is >>  p.y;
		return is ;
	}
	
	friend ostream& operator << (ostream &os , Point p){
		os << p.x;
		os << p.y;
		return os;
	}
	
	friend Point operator + (Point p1 , Point p2 ){
		Point p3;
		p3.x = p1.x + p2.x ;	
		p3.y = p1.y + p2.y;
		return p3;
		
// tuong tu voi cac phep tru nhan chia		
	}
	friend bool operator > (Point p1 , Point p2 ){
		return p1.x > p2.x;
	}
	// toan tu so sanh tra ve true or false 
	
};
int main(){
	Point p1 , p2 ; 
	cout <<"nhap " << endl;
	cin >> p1; 
	cout <<"nhap " <<endl;
	cin >> p2;
	cout << p1.x << " " << p1.y << endl; 
	
	cout << p1 <<endl << p2;
	
	Point p3 = p1 + p2 ;
	cout << "p1 + p2 = " << p3; 
	
	cout << "so sanh " << (p1 > p2);
	return 0 ;
}
