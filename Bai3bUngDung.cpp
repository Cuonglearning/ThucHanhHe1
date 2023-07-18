#include<iostream>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	int n;
	cout<<"Nhap vao mot so nguyen: ";cin>>n;
	if(n>=0&&n<=255){
	cout<<"Ky tu ASCII tuong ung:"<<char(n)<<endl;
	cout<<"Ky tu ASCII ke tiep:"<<char(n+1);
	}	
	else{
		cout<<"So khong hop le!!";
	}
}

