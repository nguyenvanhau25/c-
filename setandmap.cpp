#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

/*
			SETS AND MAP 
	SETS: luu cac tap hop ma ko co phan tu nao giong nhau ( mang ) co tinh thu tu
			insert: them 1 ptu vao trong set
			size : so luong ptu trong set
			find :  tim kiem phan tu trong sets . tra ve interater ( index ). ptu cuoi la s.end()
			count : tim kiem phan tu trong sets . tra ve true flase
			erase : xoa ptu
	Multiset: luu dc cac ptu giong nhau va sd  moi chuc nang nhu set		
	Unordered_set : ko luu theo thu tu 
*/
int main(){
	set<int> s;
	s.insert (100) ;
	cout << " nhap mang: " ;
	int n ; cin >> n;
	for (int i = 0 ; i < n ; i++){
		int x  ; cin >> x ;
		s.insert (x) ;
	}
 	cout << s.size() << endl;
 	if (s.count(5) == 1 ){
 		cout << "found "  << endl;
	 }else {
	 	cout <<"not found " << endl;
	 }
 	if (s.find(5) != s.end() ){
 		cout << "found "  << endl;
	 }else {
	 	cout <<"not found " << endl;
	 }
 	s.erase (6) ;
 	cout << s.size() << endl;
 	
 	// duyet
 	for ( int x : s){
 		cout << x << " " ;
	 } 
	 cout << endl;
	 // auto : duyet voi tat ca cac kieu du lieu
	for ( auto x : s){
 		cout << x << " " ;
	} 
	
	return 0;
}
