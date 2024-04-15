#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Bank ;
class Account{
private:	
	string name;
	int balance ;
	
public:
	string get_name(){
		return this->name;
	}	
	int get_balance(){
		return this->balance;
	}
	friend Bank;
};
class Bank{
private:
	// Tao mang dong de luu tru cac accounts
	vector < Account > accounts;
public:
	void add_accounts(string name , int balance){
		Account new_account;
		new_account.name = name;
		new_account.balance = balance ;
		
		this->accounts.push_back(new_account);	
	} 
	void get_accounts(string name){
		int index = -1 ;
		for(int i = 0 ; i < this->accounts.size() ; i++){
			if(!name.compare(this->accounts[i].name)){
				index = i ;
				break;
			}
			}
			if (index != -1){
				cout << "Name " << this->accounts[index].name << endl;
				cout <<"Balance " << this->accounts[index].balance << endl;
				
			}else{
				cout <<"Not found " ;
			}		
	}
	
};
int main(){
	Bank bank;
	bank.add_accounts("hau ", 2000);
	bank.add_accounts("hoang", 3000);
	bank.add_accounts(" hoang ", 000);
	
	bank.get_accounts("hau ");
	
	
	return 0;
}
