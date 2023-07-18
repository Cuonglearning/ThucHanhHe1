#include<iostream>
#include<math.h>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	int a;
	float h,S;
	cout<<"Nhap canh tam giac deu:";cin>>a;
	cout<<"Chu vi tam giac la:"<<3*a<<endl;
	h=sqrt((a*a)-((a/2)*(a/2)));
	S=(1/2)*a*h;
	cout<<"Dien tich tam giac la:"<<S;
}
