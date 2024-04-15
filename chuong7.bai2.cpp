#include<iostream>
#include<string>
using namespace std;

void input_integer(string label , int &n );
void input_array(int *arr , int size) ;
void print_array (int *arr , int size);
void remove(int* &arr , int &size , int deleted_index );
int main(){
	int n , x; 
	input_integer("n = " , n );
	
	int *numbers = new int[n];
	cout <<"nhap mang: ";
	input_integer("x = " , x);
	input_array(numbers , n ); 
	remove(numbers , n , x);
	cout << "mang sau khi xoa " ;
	print_array(numbers , n );
	
}
void input_integer(string label , int &n ){
	cout << label ;
	cin >> n ;
}
void input_array(int *arr , int size) {
	for(int i = 0 ; i < size ; i++){
		cin >> arr[i];
	}
}
void print_array (int *arr , int size){
	for(int i = 0 ; i < size ; i ++){
		cout << arr[i] << " ";
	}
}
void remove(int* &arr , int &size , int deleted_index ){
	// xoa ptu can xoa tren mang cu
	for(int i = deleted_index ; i < size ; i ++){
		arr[i] = arr[i + 1 ];
	}
	// tao ra mang moi size - 1
	int new_size = size - 1 ;
	int *tmp_arr = new int [new_size];
	// copy ptu mang cu sang mang moi
	for(int i = 0; i < new_size ; i ++){
		tmp_arr[i] = arr[i];
	}
	// gan mang moi cho mang cu va giam size - 1 
	delete[] arr;
	arr = tmp_arr;
	size = new_size;
	
}
