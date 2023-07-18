#include<iostream>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	int a,b;
	cout<<"Nhap vao hai so nguyen: ";cin>>a;cin>>b;
	if(a<b){
		cout<<"min="<<a<<endl;
		cout<<"max="<<b<<endl;
	}
	else{
		cout<<"min="<<b<<endl;
		cout<<"max="<<a<<endl;
	}
}
