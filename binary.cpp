#include<iostream>
#include<fstream>
using namespace std;

// file nhi phan luu du lieu duoi dang 0.1
// ma hoa du lieu len tinh bao mat cao
// kho xu li , sua doi nhung truy xuat du lieu nhanh

int main(){
	ofstream ofs; // class nay mo file , write , tu tao file
	ofs.open("binary.bin" , ios::binary);
	// duoi file : .bin || .dat
	if(!ofs.is_open()){
		cout << "that bai " ;
		return 1;
	}
	int n = 3 ;
	float numbers[n] = { 1.2 , 1.3 , 1.4}; 
	ofs.write((char*)&n , sizeof(int));
	//con tro char va duoc ep kieu tu dia chi n
	//lay ra dc dung luong cua bien n ( n la dang int ) 
	// tao 1 bien de luu tru gtri vua lua
	
	ofs.write((char*)&numbers, sizeof(float)*n);
	ofs.close();
	
	// ko the mo truc tiep 
	// buoc nay mo file
	ifstream ifs ;
	ifs.open("binary.bin" , ios::binary);
	
	// buoc nay doc file
	int read_n;
	ifs.read((char*)&read_n, sizeof(int));
	
	// tao mang
	float read_numbers[read_n];
	// doc tiep cac ptu da luu vao mang 
	ifs.read((char*)&read_numbers , sizeof(float)*read_n);
	// in ra cac gtri
	for(int i = 0 ; i< read_n; i ++){
		cout << read_numbers[i] <<" ";
	}
	
	
	
	return 0 ;
}

