#include<iostream>
#include<math.h>
using namespace std;
int main(){
// mang 2 chieu giong nhu ma tran
// dung for long nhau de nhap va xuat mang
// mang 1 chieu thi dung 1 vong for
	int n ;
	cout <<"nhap vao bai muon lam: " ;
	cin >> n;
	switch (n) {
	case 1:
	{
		int so_hang , so_cot ;
		int arrays[10][10];
		cout <<"nhap vao so hang va cot " ;
		cin >> so_hang >> so_cot;
		for (int i = 0 ; i < so_hang ; i++)
		{
			for (int j = 0 ; j < so_cot ; j++)
			{
				cin >> arrays[i][j];
			}
		}
		int sum = 0;
		for (int i = 0 ; i < so_hang ; i++)
		{
			for(int j = 0 ; j < so_cot ; j ++)
			{
				sum += arrays[i][j];
			}
		}
		cout <<"tong cac phan tu "<<sum;
	}
	break;
	case 2:
	{
	 	int n , mang[10];
		cout <<"nhap vao so phan tu ";
		cin >> n;
		cout <<"nhap mang: ";
		for (int i = 0 ; i < n ; i ++ )
		{
			cin >> mang[i];
		}
		int max = mang[0] ; // lay index tai 0 de so sanh va gan
		for (int i = 0 ; i < n ; i++){
			if ( mang[i] > max){
				max = mang[i];
			}
		}
		cout << "gia tri max la: " << max;			
	} break;
	case 3:
	{
		int n , m , arr[10][10];
		cout <<"nhap cac phan tu m va n ";
		cin >> n >> m;
		cout <<"nhap mang: " << endl;
		for (int i = 0 ; i < n ; i++){
			for (int j = 0 ; j < m ; j++){
				cin >> arr[i][j];
			}
		}
		int max = arr[0][0];
		for(int i = 0 ; i < n ; i++){
			for (int j = 0 ; j < m ; j ++){
				if (max < arr[i][j])
				{
					max = arr[i][j];
				}
			}
		} cout << max;
		break;
	}
	case 4 : // tong cac ptu vien
	{
			int n , m , arr[10][10];
		cout <<"nhap cac phan tu m va n ";
		cin >> n >> m;
		cout <<"nhap mang: " << endl;
		for (int i = 0 ; i < n ; i++)
		{
			for (int j = 0 ; j < m ; j++)
			{
				cin >> arr[i][j];
			}
		}
		int sum = 0;
		for (int i = 0; i < n ; i ++)
		{
			for(int j = 0 ; j < m ; j ++)
			{
				if (i == 0 || j == 0 || j == m - 1 || i == n -1 ){    // dung ma tran
					sum += arr[i][j];
				}
			}
		} cout <<"tong cac ptu la : " << sum ; 
		break;
	}
	case 5:
	{
		int n , m , arr[10][10];
		cin >> n >> m ;
			for (int i = 0 ; i < n ; i++)
		{
			for (int j = 0 ; j < m ; j++)
			{
				cin >> arr[i][j];
			}
		}
			for (int i = 0 ; i < n ; i++)
		{
			for (int j = 0 ; j < m ; j++)
			{
				cout << arr[i][j] <<" ";
			}cout << endl;
		} 
	} break;
	case 6:
		// bubble sort sap xep
	{ 
		int n = 5 ;
		int arr[n] = {4 , 3 , 6 , 1 , 5};
		for (int i = n-1 ; i > 0 ; i--){
			for(int j = 0 ; j < i ; j++){
				if( arr[j] > arr[j+1] ){
					int trunggian = arr[j];
					arr[j] = arr[j + 1];    // qua 1 trung gian de doi vi tri
					arr[j + 1] = trunggian;
					
				}
			}
		}
		for(int i = 0 ; i < n ; i ++){
			cout << arr[i] << " ";
		}	
	} break;
	
// bai tap
	case 7 :
	{
		int n , numbers[10];
		cout <<"n = " ;
		cin >> n;
		for(int i = 0 ; i < n ; i ++){
			cin >> numbers[i];
		}
		for (int h = n - 1 ; h > 0 ; h--){
			for (int j = 0 ; j < h ; j++){
				if (numbers[j] > numbers[j + 1]){
					int tam = numbers [j];
					numbers[j] = numbers[j+1];
					numbers[j + 1 ] = tam;
				}
			}
		}
		for(int i = 0 ; i < n ; i++){
			cout << numbers[i] << " ";
		}										
	} break;
	case 8: // sap xep voi char tuong tu 
	{		
		int n ;
		char mang[10];
		cin >> n;
		for (int i = 0 ; i < n ; i ++){
			cin >> mang[i] ;	
		}	
		for (int h = n - 1 ; h > 0 ; h--){
			for (int j = 0 ; j < h ; j++){
				if (mang[j] > mang[j + 1]){
					int tam = mang[j];
					mang[j] = mang[j+1];
					mang[j + 1 ] = tam;
				}
			}
		}
		for(int i = 0 ; i < n ; i++){
			cout << mang[i] << " ";
		}	
	} break;
	case 9: // bai tap chuong 04
	{
		int n , numbers[10];
		cout <<" n = " ;
		cin >> n;
		for(int i = 0 ; i < n ; i ++){
			cin >> numbers[i];
		} 	
		for (int h = n - 1 ; h > 0 ; h--){
			for (int j = 0 ; j < h ; j++){
				if (numbers[j] < numbers[j + 1]){
					int tam = numbers [j];
					numbers[j] = numbers[j+1];
					numbers[j + 1 ] = tam;
				}
			}
		}
		for(int i = 0 ; i < n ; i++){
			cout << numbers[i] << " ";
		}				
	} break;
	case 10 : // index co tong bang gtri nhap vao
	{
	int n , k , numbers[10];
		cout <<" n = " ;
		cin >> n;
		cout << "nhap mang ";
		for(int i = 0 ; i < n ; i ++){
			cin >> numbers[i];
		}	
		cout <<"k = ";
		cin >> k ;
		int x = -1 , y = -1 ; // khoi tao de gan index
		for(int i = 0 ; i < n ; i ++){
			for (int j = 0 ; j < n ; j++){
				if ( j != i && (numbers[i] + numbers[j] == k )){
					x = i ;
					y = j ;
					break;
				}
			}
			if (x != -1 && y != -1 )
			break;
		}
		if (x != -1 && y != -1 ){
			cout << "ket qua la " << x << " " << y ;
		}else 
			cout << " khong co gia tri " ;		
	} break;
	case 11: // tinh tong 2 ma tran
	{
		int n , m , matrix1[10][10] , matrix2 [10][10];
		cout << " so hang n = " ; cin >> n ;
		cout << " so cot m = " ; cin >> m ;
		cout << "ma tran 1 " <<endl;
		for (int i = 0 ; i < n ; i ++){
			for (int j = 0 ; j < m ; j ++){
				cin >> matrix1[i][j];
			}
		}
		cout << "ma tran 2 " << endl;
		for (int i = 0 ; i < n ; i ++){
			for (int j = 0 ; j < m ; j ++){
				cin >> matrix2[i][j];
			}
		}
		cout << "tong 2 ma tran la " << endl;
		for (int i = 0 ; i < n ; i ++){
			for (int j = 0 ; j < m ; j ++){
				cout << (matrix1[i][j] + matrix2[i][j] ) <<" ";	
			}cout << endl;
		} 
	}break;
}
	return 0;
}
