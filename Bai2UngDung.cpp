#include<iostream>
#include<math.h>
using namespace std;
int main(){
	cout<<"MSSV:1050080006,Ten:Ly Cuong,Lop:10_DH_CNTT1"<<endl;
	int x1,y1,x2,y2;
	float hsg,kc;
	cout<<"Toa do diem A:";cin>>x1>>y1;
	cout<<"Toa do diem B:";cin>>x2>>y2;
	hsg=(y2-y1)/(x2-x1);
	kc=sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
	cout<<"He so goc cua duong thang qua A va B la:"<<hsg<<endl;
	cout<<"khoang cach giua hai diem A va B la:"<<kc<<endl;
}
