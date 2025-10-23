#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct Mahasiswa {
string nama;
int umur;
string nik;
string jabatan;
};

int main() {
const int jumlahMahasiswa = 100;
Mahasiswa mhs[jumlahMahasiswa];
int count = 0;
ifstream inputFile("mahasiswa.txt");
if (!inputFile) {
cerr << "Tidak dapat membuka file!" << endl;
return 1;
}
string line;
while (getline(inputFile, line) && count < jumlahMahasiswa) {



stringstream ss(line);
ss >> mhs[count].nama >> mhs[count].umur >> mhs[count].nik >> mhs[count].jabatan;
count++;
}
inputFile.close();
cout << "nomer opsi: " << endl << "1. Menampilkan semua data karyawan." << endl;
cout << "2. Menambahkan karyawan baru." << endl << "3. Mengedit data karyawan berdasarkan NIK." << endl;
cout << "masukan no. opsi: " ;
int opsi = 0;
cin >> opsi;
//for (opsi == 1; || opsi == 2; || opsi == 3;){

if(opsi == 1){

cout << "Data Mahasiswa:" << endl;
for (int i = 0; i < count; i++) {
cout << "Mahasiswa " << i + 1 << ":" << endl;
cout << "Nama: " << mhs[i].nama << endl;
cout << "Umur: " << mhs[i].umur << endl;
cout << "NIK: " << mhs[i].nik << endl;
cout << "Jabatan: " << mhs[i].jabatan << endl;
cout << endl; // Baris kosong untuk pemisah
}
}else if(opsi == 2){
int jumlahMhs = 0;
cout << "maunya input brp karyawan(diatas 3): ";
cin >> jumlahMhs;
Mahasiswa mhs[jumlahMhs]; 

// Mengisi data mahasiswa
for (int i = 0; i < jumlahMhs; i++) {
cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
cin >> mhs[i].nama ;
//getline(cin, mhs[i].nama); 
cout << endl;
cout << "Masukkan umur: ";
cin >> mhs[i].umur;
cin.ignore(); // Mengabaikan newline leftover dari cin
cout << "Masukkan NIK: ";



getline(cin, mhs[i].nik); 

cout << endl; 
}
}else if(opsi == 3){
	cout << "edit" << endl;
}
//}
//cout << "masukan no. opsi: " ;
//cin >> opsi;

return 0;
}
