
#include<iostream>
#include <sstream>
using namespace std;


float fahrenheit(float c){
	return c*9/5+32;
}
float kelvin (float c){
	return c+273.15;
}
int main(){


	int td = 0;
	cout<<"masukan jumlah data yang diinginkan: ";
	cin>>td;
	int suhu[td];
	for(int i=0;i<td;i++){
		cout<<"masukan suhu ke- "<<i+1<<" : ";
		cin>>suhu[i];
	}
	cout<<"menampilakn data"<<endl;
	cout<<"celcius"<<"   "<<"farenheit"<<"   "<<"kelvin"<<endl;
	for(int i=0;i<td;i++){
		cout<<suhu[i]<<"        "<<fahrenheit(suhu[i])<<"          "<<kelvin(suhu[i])<<endl;
//		cout << "F: " << fahrenheit(suhu[i]) << endl;
//		cout << "K: " << kelvin(suhu[i]) << endl;
	}
//	string line;
//stringstream ss(line);
//ss >> derajat >>fahrenheit(derajat);
//count++;

//cout << "Keliling: " << kelilingLingkaran(10) << endl;
}
