#include<iostream>
using namespace std;
int main(){
int C;
int R;
int m[10][10];
cout<<"kolom = ";
cin>>C;
cout<<"baris = ";
cin>>R;
for (int r=0;r<R;r++) {
int s=0;
for(int c=0;c<C;c++) s=s+m[r][c];
cout<<s<<"\n";
}
}

