#include<iostream>
#include<fstream>
using namespace std;
int main() {
 int i = 0; 
 ifstream file("data_nol.txt");
 do {
 cout << "Iterasi ke-" << i << endl;
 i++; 
 } while (file >> i); 
 return 0;
}

