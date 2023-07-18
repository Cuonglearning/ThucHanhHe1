#include<iostream>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	char c;
	cout<<"Nhap vao mot ky tu: ";cin>>c;
	cout<<"Ma ASCII:"<<int(c)<<endl;
	cout<<"Ky tu ke tiep:"<<char(int(c)+1);
}
