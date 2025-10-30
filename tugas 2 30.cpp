
#include<iostream>
using namespace std;

void ubahValue(int x) {
x = 100;
}
void ubahReferencea(int &x) {
x = 11;
}
void ubahReferenceb(int &x) {
x = 9;
}
int main() {
	int a = 0;
	int b = 0;
	cout<<"masukan bil. 1: ";
	cin>>a;
	cout<<"masukan bil. 2: ";
	cin>>b;
	cout<<"sebelum ditukar: "<<"a= "<<a<<"b= "<<b<<endl;
//int a = 5;
ubahValue(a);
cout << "setelah tukarByValue: "<<"a= "<<a<<"b= "<<b<<endl;
ubahReferencea(a);
ubahReferenceb(b);
cout << "setelah tukarByReference: " <<"a= "<<a<<"b= "<<b<<endl;
return 0;
}
