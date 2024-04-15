#include<iostream>
#include<math.h>
using namespace std;

void CheckSnt(int *array , int size );
void Tachsnt(int *array , int size1 , int *array1 , int &size2 );
void Tach2mang(int *array1 , int size1, int *array2 , int &size2 , int *array3 , int &size3);
void Gop(int *array1 , int size1 , int *array2 , int size2 , int *array3, int &size3);
int max(int *array , int size);
void sort(int *array , int size);
void Them(int *array , int &size , int index , int x );
void Xoa(int *array , int &size , int x );
void Print_array (int *array , int size);
int main(){
	int size ;
	int array[size];
	int array1[size];
	int array2[size];
	int array3[size]; 
	cout <<"nhap so phan tu";
	cin >> size;
	for (int i = 0 ; i < size ; i ++){
		cin >> array[i];
	}
	CheckSnt(array , size);	
	return 0;
}

void CheckSnt(int *array , int size ){
	int dem = 0 ;
	for(int i = 2; i <= array[i] ;i++ ){
		if(array[i] % i == 0 ){
			
	}
}

void Tach2mang(int *array1 , int size1, int *array2 , int &size2 , int *array3 , int &size3)
{
	 size2 = 0 ; 
	 size3 = 0 ;
	for(int i = 2 ; i < sqrt(size1) ; i++){
		if(array1[i] % i != 0){
			array2[size2] = array1[i];
		}else{
			array3[size3] = array1[i];
		}
	}
}
void Gop(int *array1 , int size1 , int *array2 , int size2 , int *array3 , int &size3){
	size3 = 0 ;
	for(int i = 0 ; i < size1 ; i++){
		array3[size3] = array1[i];
	}
	for (int i = 0 ; i < size2 ; i ++){
		array3[size3] = array2[size2];
	}
}
int max(int *array , int size){
	int index = array[0];
	for (int i = 0 ; i < size ; i++){
		if(index < array[i]){
			index = array[i];
		}
	} return index;
}
void sort(int *array , int size){
	for(int i = size - 1 ; i > 0 ; i--){
		for (int j = 0 ; j < i - 1 ; j++){
			if (array[j] > array[j+1]){
				int tmp = array[j];
				array[j] = array[j+1];
				array[j+ 1] = tmp;
			}
		}
	}
}
void Them(int *array , int &size, int index , int x ){
	if(index >= 0 && index <= size){
		for (int i = 0 ; i > index ; i ++){
			array[i] = array [i+1];			
	}
	array[index] = x;
	size++;
}
}
void Xoa(int *array , int &size, int index )
{
	if(index >= 0 && index <= size){
		for(int i = index ; i < size-1  ; i++){
			array[i] = array[i+1];
		} size --;
	}
}
void Print_array (int *array , int size){
	for (int i = 0 ; i < size ; i ++){
		cout << array[i] << " ";
	}
}
}
void Tachsnt(int *array , int size1 , int *array1 , int &size2 ){
	int size2 = 0;
	for (int i = 2 ; i < sqrt(size1) ; i++){
		if(array[i] % i != 0){
				array1[size2] = array [i];
				size2 ++;
			}
		}
	}






