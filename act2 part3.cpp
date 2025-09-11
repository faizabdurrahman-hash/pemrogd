#include<iostream>
#include<string>
using namespace std;
int main (){
	string kalimat;
	cin.ignore();
	cout << "masukan sebuah kalimat: ";
	getline(cin, kalimat);
	cout << "kalimat yang anda masukan: " << kalimat << endl;
	return 0;
}
