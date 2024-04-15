#include<iostream>

using namespace std;

//	void xinchao(){
//		cout << " xin chao \n"; // tao ham
//	}
//	int main(){
//		for(int i=1; i<=10; i++){
//			xinchao(); // goi ham
//		}	
//		return 0;
//	}	

//		void taoham( int a , int b  ){ tao hàm và tao giá tr?
//	 
//			cout<< a*b << endl;
//		}
//		int main(){
//			taoham(10 , 20); gán gtri cho ab 
//			return 0;
//		}
// 		return o ; return n*(n+1) ;....
//
//		vd: s= 1/1 + 1/2 +..+ 1/n
//		 s1 = 1 + 2 ..+ n
//		int tong( int n){
//			float res = 0;
//			for (int i = 1 ; i <= n ; i++){
//				res += 1.0 / i ;
//			}
//			return n*(n+1)/2;
//		}
//		int main(){
//			cout<<" nhap vao gia tri cua n :"<< endl;
//			cin >> n ;
//			tong(n);
//			cout << " tong cua s1 la: "<< endl;
//			cout <<n;
//			return 0;
//		}

// nap chong ham
	int tong( int a,int b ){
		return a + b ;
	}
	float tong( float a , float b){
		return a + b ;
	}
	int main(){
		float m = 100.1 ; float n = 200.2 ;
		cout << tong( m , n) ;
	}
	

