#include <iostream>
using namespace std;
int main(){
	int A = 15;
	int B = 20;
	int C = 0;
	cout<<"sebelum ditukar:"<<A<<"dan"<<B<<endl;
	C = A;
	A = B;
	B = C;
	cout<<"stelah ditukar:"<<A<<"dan"<<B<<endl;
	return 0;
	
}
