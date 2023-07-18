#include<iostream>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	int s;
	cout<<"Nhap vao so giay: ";cin>>s;
	cout<<""<<s<<" giay = "<<s/3600<<" gio "<<s%3600/60<<" phut "<<s%3600%60<<" giay";
}
