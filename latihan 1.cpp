#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah nilai yang ingin dikeluarkan: ";
    cin >> n;

    int arr[n]; // buat array dengan ukuran n

    cout << "Masukkan nilai:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mx = arr[0]; // nilai maksimum awal

    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }

    cout << "Nilai maksimum adalah: " << mx << endl;

    return 0;
}
