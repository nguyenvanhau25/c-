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
				if (max < arr[i][j]){
					max = arr[i][j];
				}
			}
		} cout << max;
		break;
	}
	case 4 :
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
	}
}
	return 0;
}
