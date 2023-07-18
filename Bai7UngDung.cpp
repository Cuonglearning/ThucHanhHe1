#include<iostream>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	int h,m,s;
	cout<<"Nhap gio, phut va giay:";cin>>h>>m>>s;
	cout<<h<<" gio "<<m<<" phut "<<s<<" giay = "<<3600*h+60*m+s<<" giay";
}
