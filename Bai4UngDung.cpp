#include<iostream>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	float r1,r2,r3,rtd;
	cout<<"Nhap ba gia tri dien tro:";cin>>r1>>r2>>r3;
	rtd=1/r1+1/r2+1/r3;
	cout<<"Tong dien tro:"<<1/rtd;
}
