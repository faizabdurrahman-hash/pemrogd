#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N;
    cout << "Masukkan Angka: ";
    cin >> N;
    bool isPrime = true;
    int count = 0;

    if (N == 0 or N == 1 or N < 0) isPrime = false;

    for (int i=1; i<=sqrt(N); i++){
        if (N % i == 0) count+= 2;
        if (count > 2) isPrime = false;
    } 

    if (isPrime){
        cout << N << " adalah bilangan prima" << endl;
    }
    else{
    	cout << N << " bukan bilangan prima" << endl;
	}
}
