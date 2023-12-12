#include<iostream>
using namespace std;

int main(){
	string barang1,barang2,barang3;
	int a,b,c,d,z,x,y,h,q,w,e,r,t;
	cout<<"masukan Barang ke-1= ";
	cin>>barang1;
	for(int z=1;z<=3;z++){
		cout<<"masukan data ke 1"<<" "<<0+z<<"= ";
		cin>>d;
		a=b;
		b=c;
		c=d;
		}	
	cout<<"masukan Barang ke-2= ";
	cin>>barang2;
	
	for(int z=1;z<=3;z++){
		cout<<"masukan data ke 2"<<" "<<0+z<<"= ";
		cin>>h;
		t=x;
		x=y;
		y=h;
		}
	cout<<"masukan Barang ke-3= ";
	cin>>barang3;
	
	for(int z=1;z<=3;z++){
		cout<<"masukan data ke 3"<<" "<<0+z<<"= ";
		cin>>r;
		q=w;
		w=e;
		e=r;
		}
	
	int barang[3][3]={a,b,c,t,x,y,q,w,e};
	
	cout<<"=================================";
	cout<<"\nNo  Nama Barang  2001  2002  2003";
	cout<<"\n=================================";
	cout<<"\n1 \t"<<barang1;
	for (int x=0;x<=2;x++){
		cout<<"\t"<<barang[0][x];
	}
	cout<<"\n2 \t"<<barang2;
	for (int x=0;x<=2;x++){
		cout<<"\t"<<barang[1][x];
	}
	cout<<"\n3 \t"<<barang3;
	for (int x=0;x<=2;x++){
		cout<<"\t"<<barang[2][x];
	}
	cout<<"\n=================================";
}
