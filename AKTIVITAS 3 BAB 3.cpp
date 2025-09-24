#include <iostream>
using namespace std;

int main(){
	int nilai;
	cout << "input nilai: ";
	cin >> nilai ;
	
	if (nilai >= 80){
		cout << "A" << endl;
	} else if (nilai >= 60 && nilai < 80){
		cout << "B" << endl;
	} else if (nilai < 60 && nilai >= 40){
		cout << "C" << endl;
	} else if (nilai < 40 && nilai >= 20){
		cout << "D" << endl;
	} else if (nilai < 20){
		cout << "E" << endl;
	} else {
		cout << "bukan angka" << endl;
	}
}
