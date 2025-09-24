#include<iostream>
using namespace std; 
int main(){
	int nilai;
	cout<<"nilai: ";
	cin>>nilai;
	if (nilai == 0){
		cout<<"nilai = 0"<<endl;
	}else if(nilai < 0){
		cout<<"nilai = negatif"<<endl;
		
	}else if(nilai > 0){
		cout<<"nilai = positif"<<endl;
		if(nilai %2 == 0){
			cout<<"nilai = genap"<<endl;
		}else{
			cout<<"nilai = ganjil"<<endl;
		}
		
	}else{
		cout<<"nilai = bukan bilangan bulat"<<endl;
		
	}
	
}
