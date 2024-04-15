#include<iostream>
using namespace std;
/*
		HAM BAN ( FRIEND FUNCTION )
	- co the truy cap den cac private ma ko can dung getter , setter 
	- cai thien tinh bao mat 	
	- tang hieu suat cua truong trinh . 
*/ 
class Point{
private:
	int x ;
	int y;
public:
	Point(){}
	
	Point (int x , int y){
		this->x = x ;
		this->y = y;
	}
	// luc nay ham print_point la friend cua ham point => co the su dung cac properties , methods 
	//	cua ham point ke ca private	( ham friend ko the thua ke )
	friend void print_point(Point point) ; 
};

void print_point (Point point)
{
	cout << point.x << " " << point.y<< endl;
}
int main(){
	print_point (Point (1 , 2));
	
	
	return 0;
}
