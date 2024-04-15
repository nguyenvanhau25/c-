#include<bits/stdc++.h>
using namespace std;
/*
				MAP: luu co thu tu nhung la cap key-value ( set la value )
			map< datatype1 , datatype2 > ten 	
	( key , value ): 1 cap pair . value co the trung nhau nhung key ko dc trung nhau
			Iterator giong nhu con tro . dc use de tro toi cac container cua SLT nhu set , vector, map
	insert , find , count , erase ( xoa cac cap )
	HAy dung de tinh tan suat trong mang:
		- Dem so luong ptu trong mang , sau do in ra kem tan suat cua no
	Multimap va Unordered_map : giong nhu cua set
	Multimap : chi dung insert khi them gia tri
	
*/
/*
int main(){
	map<int , int> mp;
	mp[100] = 600; // (100 , 200 )
	mp[200] = 500; // ( 200 , 300 )
	mp.insert({500 , 400 }) ; // (500 , 400 )
	cout << mp.size() << endl;
	mp[200] = 600 ; // pair ( 200 , 300 ) raplaced by ( 200 , 600 )
	cout << mp.size() << endl;
	
	// duyet dung for each hoac interator ( map luu cac cap pair ) 
	for ( pair < int , int > x : mp){
		cout << x.first << " " << x.second << endl;
	}
	// or 
	for ( auto it :mp){
		cout << it.first << " " << it.second << endl;
	}
	// iterator . luc nay it dang la iterator len phai dung point
	for ( map<int , int > :: iterator it = mp.begin() ; it != mp.end() ; it ++){
		cout <<(*it).first << " "<<(*it).second << endl;
	}
*/
int main(){
	map < int , int > mp;
	int n ;
	cout <<" n = " ;
	cin >> n;
	for ( int i = 0  ; i < n ; i ++){
		int x ; cin >> x;
		mp[x] ++;
	}
	for (auto it : mp){
		cout << it.first << " " << it.second << endl; 
	}
	
	
	return 0;
}
