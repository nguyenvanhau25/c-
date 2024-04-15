#include<iostream>
#include<math.h>
using namespace std;
bool nto(int  i){
	for(int x = 2 ; x <= sqrt(i) ; x++){
		if(i % x  == 0){	
			return false ;
		}
	} return true ;
}
int main(){
	int n;  ;
	int kq;
	cin >> n ;
	kq = nto(n);
	cout << kq;
//	if (nto(n)) {
//	       cout <<"1";
//	} else {
//	       cout <<"0";
//	}
}
