#include<iostream>
#include<string>
using namespace std;

void input_integer(string label , int &n);
void input_array(int *arr , int &size); // ne dung con tro vi cap phat mang dong
void print_array(int *arr , int size);
void push(int* &arr , int &size , int new_element); // ham them phan tu

int main(){
	int n , x;
	input_integer("nhap n " , n );
	cout <<"nhap mang ";
	int *numbers = new int[n]; // cap phat mang dong
	input_array(numbers , n );
	input_integer("x = " , x ) ;
	push(numbers , n ,x);
	print_array(numbers, n );
	return 0;
}
void input_integer(string label , int &n){
	cout << label ;
	cin >> n ;	
}
void input_array(int *arr , int &size){
	for (int i = 0 ; i < size ; i ++){
		cin >> arr[i];
	}
}
void print_array(int *arr , int size){
	for (int i = 0 ; i < size ; i ++){
		cout << arr[i] << endl;
	}
}
void push(int* &arr , int &size , int new_element){
	// tao mang moi size + 1
	int new_size = size + 1 ;
	int *tmp_arr = new int[new_size];
	// copy ptu cu sang mang moi
	for(int i = 0 ; i < size ; i ++){
		tmp_arr[i] = arr[i];
	}
	// them ptu moi vao cuoi mang moi
	tmp_arr[ new_size - 1 ] = new_element;
	// gan mang moi cho con tro cu
	delete [] arr;
	arr = tmp_arr;
	size ++;
	// tang size len 1
	
}
