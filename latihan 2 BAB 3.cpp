#include <iostream>
using namespace std;
int main() {
int angka;
cout << "Pilih angka: ";
cin >> angka;
switch (angka) {
case 1:
cout << "+";
break;
case 2:
cout << "-";
break;
case 3:
cout << "*";
break;
default:
cout << "/";
}
return 0;
}
