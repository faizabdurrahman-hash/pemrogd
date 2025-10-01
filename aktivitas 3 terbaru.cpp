#include<iostream>
#include<fstream>
using namespace std;
int main(){
 int data;
 ifstream file("data_input.txt");
 if(file){
 cout<<"File sukses dibuka!"<<endl;
 while(file>>data){
 cout<<data<<endl;
 }
 file.close();
 }else{
 cout<<"File gagal dibuka!"<<endl;
 }
}
