#include <iostream>

void bubble_sort(int numbers[10] , int n )
{
	for(int i = n -1  ; i > 0 ; i-- ){
		for(int j = 0  ; j < i  ; j ++ ){
			if(numbers[j] > numbers[j + 1]){
				int trunggian = numbers[j];
				numbers[j] = numbers[j + 1] ;
				numbers[j + 1] = trunggian ;
			}
		}
	}
}

void input_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}
void print_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
}
int main()
{
    int numbers[10];
    int n;

    std::cin >> n;
    
    input_array(numbers, n);
    bubble_sort(numbers, n);
    print_array(numbers, n);

    return 0;
}
