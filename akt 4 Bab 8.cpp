#include<iostream>
 using namespace std;
 int  eksponen(int x, int y) {
 if (y == 0) return 1;
 else if (y>0) return x*eksponen(x, y-1);
 int pangkatRekursif;
 return pangkatRekursif = x * x^(y-1);
 }
 int main() {
 int A;
 int B;
 cout<<"masukan basis: ";
 cin>>A;
 cout<<"masukan eksponen: ";
 cin>>B;
 cout << "hasil dari " << A << "^" << B << " adalah " << eksponen( A,B);
 return 0;
 }

