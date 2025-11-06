#include<iostream>
 using namespace std;
 int  fb(int n) {
 if (n == 0){
 	return 0;
 } 
 else if (n == 1) {
 return 1;	
 }
 else if (n>1) {
 	return fb(n-1) + fb(n-2);
 }
 int fbr;
 return fbr = (n-1) + (n-2);
 }
 int main() {
 int f;
 cout<<"masukan fb: ";
 cin>>f;
 cout << "hasil dari fb " << f << " adalah " << fb( f);
 return 0;
 }

