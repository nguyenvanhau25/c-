#include<iostream>
#include<string>
using namespace std;
int main(){
	int choice  ;
	cout <<"nhap vao truong hop " ;
	cin >> choice;
	cin.ignore();
	switch (choice){
		case 1:
			{
				int i = 0;
				string str;
				cout <<"nhap chuoi ";
				getline(cin , str);
				// xoa dau
				while(str[0] == ' '){
					str.erase( 0 , 1 );
				}
				// xoa cuoi
				while(str[str.size()-1] == ' '){
					str.erase(str.length()-1 , 1);
				}
				// xoa giua 
				while (i < str.length()){
					if(str[i] == ' ' && str[i + 1 ] == ' ' ){
						str.erase(i , 1);
					} else 
						i++;
				}		
				// bien tat ve chu thuong
				for(int i = 0; i < str.size() ; i++) {
					str[i] = tolower(str[i]);
				}
				// chu dau hoa
				if ( str[0] != ' '){
					str[0] = toupper(str[0]);
				}
				for( int x = 0 ; x < str.size() ; x++){
					if( str[x] == ' ' && str[x + 1] != ' '){
						str[x+1] = toupper(str[x+1]);
					}
				} 
				cout << str;
			}	
	}	
}
