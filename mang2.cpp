#include<iostream>
#include<string>
using namespace std;

void viewall();
int choose() ;
void showheading();
int main(){
	int n ;
	int array[4][5] = {{1000 ,7,7,7,6} ,{1001 , 5,3,2,6},{1002,6,3,7,8},{1003,7,3,8,4}};
	while(true){
		int luachon = choose();
		switch (luachon){
			case 1:
				viewall();	
		}
	}
	return 0;
}
int choose (){
	int choose ;
	
	cout <<"===MENU===";
	cout << "1. Quan sat tat ca ban ghi cua sinh vien" << endl;
	cout <<"2.Quan sat mot ban ghi cua sinh vien boi ID" << endl;
	cout <<"3. Hien thi diem thi cuoi ky cao nhat va thap nhat" << endl;
	cout <<"nhap lua chon cua ban " ;
	cin >> choose;
	return choose;
}
void showheading(){
cout<<"========================================================\n";
cout<<"ID     Kiemtra1     Kiemtra2     Giuaky      Cuoiky\n";
cout<<"========================================================\n";
}
void viewall(int array[4][5]){
	int i , j ; 
	showheading();
	
	for(int i = 0 ; i < 4 ; i ++ ){
		for(int j = 0 ; j < 5 ; j++){
			cout <<array[4][5] <<"\t \t"  << endl;
		}
	}

	
}
