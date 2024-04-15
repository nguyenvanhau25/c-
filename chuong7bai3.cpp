#include<iostream>
#include<string>
using namespace std;

void input_integer(string label , int &n);
void input_array(int *arr , int &size); // ne dung con tro vi cap phat mang dong
void print_array(int *arr , int size);
void bubble_sort(int *arr , int size) ; // ko can chuyen tham chieu vi chi sap xep

int main(){
	int n , x;
	input_integer("nhap n " , n );
	cout <<"nhap mang ";
	int *numbers = new int[n]; // cap phat mang dong
	input_array(numbers , n );
	bubble_sort(numbers , n);
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
void bubble_sort(int *arr , int size) {
	for(int i = size -1 ; i > 0 ; i-- ){
		for(int j = 0 ; j < i  ; j++){
			if(arr[j] > arr[ j+1 ]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = tmp ;
			}
		}
	}
}

