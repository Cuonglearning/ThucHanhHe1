#include<iostream>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	int n;float S=0;
	cout<<"Nhap vao so tu nhien n:";cin>>n;
	for(int i=1;i<=n;i++){
		S=S+(1.0/i);
	}
	cout<<"Tong nghich dao cua cac so tu 1 den "<<n<<" la:"<<S;
}
