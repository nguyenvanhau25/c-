#include<iostream>
#include<string>
using namespace std;

void input_integer(string label , int &n);
void input_array(int *arr , int &size); // ne dung con tro vi cap phat mang dong
void print_array(int *arr , int size);
void update(int* &arr, int &size , int update_index , int new_element) ; // them y vao vi tri x

int main(){
	int n , x , y;
	input_integer("nhap n " , n );
	cout <<"nhap mang ";
	int *numbers = new int[n]; // cap phat mang dong
	input_array(numbers , n );
	input_integer("y = " , y);
	input_integer("x = " , x );
	update(numbers , n , x , y) ;
	cout <<"mang sau khi them: ";
	print_array(numbers , n);
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
void update(int* &arr, int &size , int update_index , int new_element) {
	// tao mang moi
	int new_size = size + 1 ;
	int *new_arr = new int[new_size];
	// copy ptu mang cu sang mang moi
	for(int i = 0 ; i < size ; i++){
		new_arr[i] = arr[i];
}
	// them ptu moi vao mang moi
	for(int i = new_size -1 ; i > update_index ; i--){
		new_arr[i] = new_arr[i-1];
	}
	new_arr[update_index] = new_element;
	// gan mang moi cho con tro cu va tang size len 1
	delete [] arr;
	arr = new_arr;
	size ++;
}
	
