#include<iostream>
#include<fstream>
using namespace std;
int main(){
 int data;
 int n;
 ifstream file("data_input.txt");
 if(file){
 cout<<"File sukses dibuka!"<<endl;
 cout<<"masukan nilai: ";
 cin >> n;
 for(int i = 0;i < n;i++){
 file>>data;
 cout<<data<<endl;
 }
 file.close();
 return 0;
 }else{
 cout<<"File gagal dibuka!"<<endl;
 return 1;
 }
}
