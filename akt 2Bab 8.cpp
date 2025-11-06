#include<iostream>
#include <fstream>
#include <sstream>
 using namespace std;
 //fungsi baca data
 int maksimumRekursif(int arr[], int n) {
 if (n == 1) return arr[0];
 int maxSubarray = maksimumRekursif(arr, n - 1);
 return (arr[n - 1] > maxSubarray) ? arr[n - 1] : maxSubarray;
 }
 int main() {
 ifstream inputFile("mahasiswa.txt");
 if (!inputFile) {
cerr << "Tidak dapat membuka file!" << endl;
return 1;
}
inputFile.close();
 int arr[] = {inputFile};
 int n = sizeof(arr) / sizeof(arr[0]);
 cout << "Nilai maksimum dalam array: " << maksimumRekursif(arr, n) << endl;
 return 0;
 }


string line;
while (getline(inputFile, line) && count < jumlahMahasiswa) {



stringstream ss(line);
ss >> mhs[count].nama >> mhs[count].umur >> mhs[count].nik >> mhs[count].jabatan;
count++;
}
inputFile.close();

