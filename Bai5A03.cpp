#include<iostream>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	int n,S=0;
	cout<<"Nhap so tu nhien n:";cin>>n;
	for(int i=1;i<=n;i++){
		if(i%7==0){
			S=S+i;
		}
	}
	cout<<"S="<<S;
}
