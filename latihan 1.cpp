#include <iostream>
using namespace std;
int main (){
	int n;
	cout<<"nilai";
	cin>>n;
	
	for (int i = 0; i < n; i++){
		int arr[i];
		cin >> arr[i];
	}
		int arr[n];
	    int mx = arr[0];
		for (int i = 1; i < n; i++){
		
			if(arr[i] > mx){
				mx = arr[i];
				cout << mx << "\n";
			}
		}

}

