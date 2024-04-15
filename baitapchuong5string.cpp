#include<iostream>
#include<string>
using namespace std;
int main(){
	// bai tap chuong 5 string
	int choice;
	cout << "nhap vao truong hop ";
	cin >> choice ;
	cin.ignore() ;
	switch (choice){
		case 1:// xoa dau cuoi 
			{
				string str;
				cout << "nhap chuoi ";
				getline(cin , str);
			// xoa khoang trang o dau
				while(str[0] == ' ' ){
					str.erase(0 , 1 );
				}
			// xoa cuoi
				while(str [str.size() - 1 ] == ' '){
					str.erase(str.size() - 1 , 1);
				}
				cout << str;	
			} break;
		case 2: // xoa khoang trang o giua de lai 1 khoang
			{
				string str;
				cout <<"nhap chuoi: ";
				getline(cin , str);
				int i = 0 ;
				while (i < str.length()){
					if(str[i] == ' ' && str[i + 1 ] == ' ' ){
						str.erase(i , 1);
					} else 
						i++;
				}
				cout << str;
			} break;
		
		case 3:
			{
				string str;
				cout <<"nhap chuoi: ";
				getline(cin , str);	
				
			// chuyen cac ki tu sang chu thuong (buoc 1)
				for (int i = 0 ; i < str.length() ; i++){
				/*	if(str[i] >= 65 && str[i] <= 90)
					{ // dung ascii 
						str[i] += 32 ;
					} 
				*/ // co 2 cach de chuyen sang chu thuong
		// dung ascci hoac cau lenh tolower 
					str[i] = tolower(str[i]) ;	
				}
		// chuyen doi chu hoa 
		// vi tri dau
			if(str[0] != ' ' ){
				str[0] = toupper(str[0]);
			}	
			for(int i = 0 ; i < str.length() ; i++){
			
			if (str[i] ==' ' && str[i + 1 ] != ' ')	{
				str[i + 1] = toupper(str[i + 1]);
			}		 
			}		
				cout << str; 	
		} 	break;		
	}
	
	
	
	return 0;
}
