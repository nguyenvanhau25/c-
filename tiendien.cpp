#include<iostream>
using namespace std;
int main(){
//	float n; 
//	float tiendien;
//	cout << "nhap vao so dien tieu thu " ;
//	cin >> n;
//	if(n < 100){
//		tiendien = n*600 ;
//		cout << "tien dien la " << tiendien ;
//	}else if (n < 150 ){
//		tiendien = ((100*600)+ ((n-100)*900));
//		cout << "tien dien la " << tiendien;
//	}else if (n < 200){
//		tiendien = ((100*600)+(50*900)+((n-150)*1200));
//		cout << "tien dien la " << tiendien;
//	}else 
//		tiendien = ((100*600)+(50*900)+(50*1200)+ ((n-200)*2000));
//		cout <<"tien dien la " << tiendien;
//	

// ve tam giac
	int sodong;
	cout <<"nhap vao so dong cua tam giac " ;
	cin >> sodong; 
	for (int i = 1 ; i <= sodong ; i++){
		for (int j =1 ; j <= i ; j ++){
			cout << "*" ;
		}
		 cout << endl;
	} 
	
	return 0;
}
