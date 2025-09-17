#include <iostream>
#include <iomanip>

using namespace std;

	int angka1;
    int angka2;
    int angka3;
    int angka4;
    int angka5;
    int angka6;
    int angka7;
    int angka8;
    int angka9;

int main(){

    cout << "masukan data baris 1 : " ;
    cin >> angka1 >> angka2 >> angka3;
    cout <<  "masukan data baris 2 : " ;
    cin >> angka4 >> angka5 >> angka6;
    cout << "masukan data baris 3 : " ;
    cin >> angka7 >> angka8 >> angka9;
    int B[3][3]={{angka1,angka2,angka3},{angka4,angka5,angka6},{angka7,angka8,angka9}};

    int i, j;
    cout << "hasil matriks normal" <<endl;
    for (i=0; i<3;i++)
    {
        for (j=0; j<3;j++)
            {cout  << B[i][j] << " ";}
        cout <<endl;
        
    }
    
   }
   
