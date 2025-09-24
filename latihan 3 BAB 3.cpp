#include <iostream>
using namespace std;
 
 int main(){
 	string nama;
 	int pin;
 	cout << "username: ";
 	cin >> nama;
 	cout << endl;
 	cout << "pin: ";
 	cin >> pin;
 	cout << endl;
 	
 	if( nama == "ugo"){
 		if (pin >= 0000 && pin <= 9999){
 		cout << "akses diterima";
		 }else{
		 	cout << "pin tidak valid";
		 }
	 }else{
	 	cout << "user tidak dikenal";
	 }
 }
