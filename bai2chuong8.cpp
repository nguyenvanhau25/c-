#include<iostream>
#include<string>
using namespace std;

struct Product{
	string name ;
	float price ;
	int quality;	
	Product(){}	
// nhap 
	friend istream &operator >> (istream &is , Product &product ){
		cout <<"nhap ten: " ;
		is.ignore() ;
		getline(is , product.name); // nhap ten dai 
		cout<< "nhap don gia: ";
		is >> product.price;
		cout <<"nhap so luong: ";
		is >> product.quality;
		return is ;	
	}
// hien
	friend ostream &operator << (ostream &os , Product product){
		os << "Ten: "  << product.name << endl;
		os <<"Gia: " << product.price << endl;
		os <<"So luong: " << product.quality << endl;
		return os ;
	}	
};
// tao 1 ham de show menu
int show_menu(); // khai bao
void print_products(Product *products , int size ) ; // dung point de quan li mang product 
void add_products(Product* &products , int &size) ;
void delete_products(Product* &products , int &size) ;
int main(){
	int size = 0 ; // vi khoi dau chua co san pham nao
	Product *products = new Product[size] ; // dung con tro de quan li 1 mang dong 
	while(true){
		
		int luachon = show_menu();
		
		
		switch(luachon) {
		case 1:
			system("cls"); // dung de xoa cai dang hien menu di 
			print_products(products ,size);
			break;
		case 2:
			system("cls") ;
			add_products(products , size ) ;
			break;
		case 3:
			system("cls") ;
			cout <<"nhap ten can xoa " ;
			delete_products(products , size ) ;
			break;
		case 4:
		// ket thuc chuong trinh
			cout <<"bye bye !" ;
			return 0;
		//ket thuc luon ham main
			
		default:
			cout << "lua chon khong hop le! " << endl;
	}
	cout <<"Ban co muon tiep tuc khong? (1/0) " << endl;
	bool is_continue;
	cin >> is_continue;
	
	if(is_continue == 0){
		cout << "bye bye ! " ;
		break ;
		// ket thuc vong lap 		
	}
}
	return 0 ;
}

int show_menu(){
	int chose ;
// cau lenh xoa hien thi
// de khi chon lai ko bi lap hien thi
	system("cls") ;
	
	cout << "======MENU======" << endl;
	cout << "1.XEM DANH SACH SAN PHAM" <<endl;
	cout << "2.THEM SAN PHAM MOI" << endl;
	cout <<"3.XOA SAN PHAM" <<endl;
	cout <<"0.THOAT CHUONG TRINH" << endl;
	cout <<"Lua chon cua ban la: " ;
	cin >> chose ;
	return chose ;	
}
// dinh nghia ham print
void print_products(Product *products , int size ) {
	
	if(size == 0 ){
		cout <<"Chua co san pham nao " << endl;
	}else {
		cout <<"Danh sach san pham:" << endl;
	for(int i = 0 ; i < size ; i ++){
		cout << products[i] << endl;
	}
	}	
}
void add_products (Product* &products , int &size) {
	// tao 1 bien de them san pham moi
	Product new_product;
	cout << "Nhap thong san pham moi: " << endl;
	cin >> new_product;
	
	// them san pham vao cuoi mang 
	// tao ra 1 mang tam co size moi bang size + 1
	int new_size = size + 1 ;
	Product *tmp_products = new Product[new_size];
	
	// copy cac du lieu cu sang mang tmp
	for(int i = 0 ; i < size ; i++){
		tmp_products[i] = products[i];
	}
	// them san pham moi vao vi tri cuoi cung
	tmp_products[new_size - 1] = new_product;
	
	delete[] products ; // xoa vung nho cu ma con tro products dang quan li
	products = tmp_products; // gan vung nho moi cho no
	size = new_size ; // tang size len 1
	cout <<"Them san pham thanh cong " << endl;	
}
void delete_products(Product* &products , int &size) {
	
// nhap ten muon xoa
	string deleted_name;
	cin.ignore();
	 // vi sau khi chon ta phai nhap number nen number se dc luu vao bo nho 
	 // dung ignore de xoa no di
	getline(cin , deleted_name) ;
	
	// di tim index cua conduct can xoa
	int deleted_index = - 1;
	// -1 : de the dien index tren chua duoc gan gia tri nao
	
	// tim kiem
	for(int i = 0 ; i < size ; i++){	
	// so sanh ten ta dung compare
	// bang 0 thi chung giong nhau
	// thi ta gan vi tri do voi deleted
		if( !deleted_name.compare(products[i].name))
		{
			deleted_index = i ;
			break ; // ko tim nx
		}	
	} 
	// nhap sai ten thi deleted van = -1
	if (deleted_index == -1 ){
		cout <<"khong tim duoc san pham " << endl;
		return ;
	}
	// khac -1 thi ta di xoa
	// de xoa phan tu tai mang dong
	// ta xoa no tai mang cu
	// chay i tu vi tri can xoa
	for(int i = deleted_index ; i < size -1 ; i ++ ){
		products[i] = products [i + 1 ];
	}  
	size -- ; 
	// tao vung nho moi co so luong ptu = size - 1 
	Product *tmp_products = new Product[size] ;
	// copy ptu tu cu sang moi
	for(int i = 0 ; i < size ; i ++){
		tmp_products[i] = products[i];
	}
	delete[]products;
	products = tmp_products ;
	// gan cho vung nho moi
	cout <<"xoa thanh cong " << endl;
}









