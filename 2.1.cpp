#include<iostream>
using namespace std; 
int main(){
 int nilai = 0;
 int i, j;
 cout<<"Masukan sebuah bilangan bulat:";
 cin>>nilai;
 //j = nilai%2;
 cout<<j;
 if (nilai < 1 || nilai != 2){
 	cout<<"Nilai bukan prima"<<endl;
 }else if(nilai %2 == 0 && nilai != 2){
 	cout<<"Nilai bukan prima"<<endl;
 
 }else{
 	cout<<"nilai bil. prima"<<endl;
 }
 
 
}


