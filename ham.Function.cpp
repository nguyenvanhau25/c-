#include<iostream>
#include<string>
#include<math.h>
using namespace std;
			// ham - Function
	void Chuoi(string massage){
		cout << "moi ban nhap chuoi: ";
		getline(cin,massage);
		cout << massage << endl;
	}
// dinh nghia ham tinh tong gia tri nhap vao
	float TinhTong (float a, float b,float c){
		cout <<"nhap vao gtri a,b,c: " ;
		cin >> a >> b >> c; 
		cout << "tong = ";
		return a + b + c;	
	// sau return la xog = break 
}
// kiem tra so nguyen to
	void SoNguyenTo(int i){
		for(int t = 2 ; t <= sqrt(i)  ; t ++){
			if ( i % t == 0){
				cout << "khong la so nguyen to " << endl;
				return ;	
			}
		}
		cout  << " la so nguyen to " << endl;
		return ;
	}		
	void songuyento(int i){
		int sum = 0;
		for(int k = 2 ; k <= i ;k ++){
			if (k % i == 0){
				sum += 1 ;
			}		
		}if( sum == 1){
				cout << "la so nguyen to" << endl;
		}else 
				cout <<"khong phai so nguyen to" << endl;
		
	}
	
	int main(){
		string x;
		Chuoi(x);
	//	cin >> s >> d >> f; nhap gtri tai day hoac co the nhap tai ham dinh nghia
		int s , d , f , kq;
		kq = TinhTong(s,d,f);
		cout << kq << endl;
		int k ;
		cout << "nhap vao gia tri:  ";
		cin >> k; 
		SoNguyenTo(k);
		int h = 6;
		songuyento(h);

	}
