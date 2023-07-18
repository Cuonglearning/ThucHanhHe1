#include<iostream>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	int n,S=0,S1=0,S2=0;
	cout<<"Nhap so tu nhien n:";cin>>n;
	for(int i=1;i<=n;i++){
		S=S+i;
		if(i%2!=0){
			S1=S1+i;
		}
		else{
			S2=S2+i;
		}
	}
	cout<<"S="<<S<<endl;
	cout<<"S1="<<S1<<endl;
	cout<<"S2="<<S2;
}
