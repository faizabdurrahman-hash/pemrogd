#include <iostream>
using namespace std;


int totalHadir = 0;


void updateTotalHadir(int hadir) {
    totalHadir += hadir;
}


float hitungPersentase(int totalPertemuan, int jumlahMhs) {
    int totalMaksimal = totalPertemuan * jumlahMhs;
    float persentase = (float(totalHadir) / totalMaksimal) * 100;
    return persentase;
}

void tampilkanHasil(int totalPertemuan, int jumlahMhs) {
    int totalMaksimal = totalPertemuan * jumlahMhs;
    float persen = hitungPersentase(totalPertemuan, jumlahMhs);
    cout << "\nTotal kehadiran kelas : " << totalHadir << " dari " << totalMaksimal << endl;
    cout << "Persentase kehadiran  : " << persen << " %" << endl;
}

int main() {
    int jumlahMhs, totalPertemuan, hadir;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMhs;
    cout << "Masukkan total pertemuan: ";
    cin >> totalPertemuan;

    for (int i = 1; i <= jumlahMhs; i++) {
        cout << "Kehadiran mahasiswa ke-" << i << ": ";
        cin >> hadir;
        updateTotalHadir(hadir);
    }

    tampilkanHasil(totalPertemuan, jumlahMhs);

    return 0;
}

