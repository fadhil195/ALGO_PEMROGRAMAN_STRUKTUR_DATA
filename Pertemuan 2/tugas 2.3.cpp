#include <iostream>
using namespace std;
	
	//Soal luas lingkaran no.1
int main() {
	double phi = 3.14, r, L, t, V, p, l, Vb;
	
	cout<<"Menghitung Luas Lingkaran #1\n";
	cout<<"Masukkan jari-jari untuk lingkaran : ";
	cin>>r;
	cout<<"Sebuah mangkuk berbentuk lingkaran memiliki jari-jari "<<r<<"cm hitunglah luas mangkuk tersebut.";
	cout<<"\nDiketahui : Jari-jari = "<<r<<"cm";
	cout<<"\nRumus : 3.14 * r^2 ";
	cout<<"\nL = 3.14*"<<r<<"^2";
	L = phi * r * r;
	cout<<"\nLuas roda tersebut Adalah = "<<L<<"cm";
	
	//Soal Luas Lingkaran no.2
	cout<<"\n \nMengitung Luas Lingkaran #2\n";
	cout<<"Masukkan jari-jari untuk lingkaran : ";
	cin>>r;
	cout<<"Sebuah wajan berbentuk lingkaran memiliki jari-jari "<<r<<"cm hitunglah luas wajan tersebut";
	cout<<"\nDiketahui : Jari-Jari = "<<r<<"cm";
	cout<<"\nRumus : 3.14 * r^2 ";
;	cout<<"\nL = (3.14 * "<<r<<" * "<<r<<"/2)";
	L = phi * r * r;
	cout<<"\nLuas wajan tersebut adalah = "<<L<<"cm";
	
	cout<<"\n \n=============================\n \n";
	
	//Soal Volume Tabung no.1
	cout<<"Menghitung Volume Tabung #1 \n";
	cout<<"Masukkan Jari-Jari Untuk Tabung 1 : ";
	cin>>r;
	cout<<"Masukkan Tinggi Untuk Tabung 1 : ";
	cin>>t;
	cout<<"Tentukan volume tabung yang jari-jari alasnya "<<r<<"cm dan tinggi "<<t<<"cm!";
	cout<<"\nDiketahui : Jari-Jari "<<r<<"cm dan Tinggi "<<t<<"cm";
	cout<<"\nRumus : 3.14 * r * r * t";
	cout<<"\nV = 3.14 "<<r<<""<<r<<"*"<<t;
	V = phi * r*r*t;
	cout<<"\nVolume Tabung 1 Adalah = "<<V<<"cm";
	
	//Soal Volume Tabung no.2
	cout<<"\n \nMenghitung Volume Tabung #2 \n";
	cout<<"Masukkan Jari-Jari Untuk Tabung 2 : ";
	cin>>r;
	cout<<"Masukkan Tinggi Untuk Tabung 2 : ";
	cin>>t;
	cout<<"Volume tabung dengan jari-jari alasnya "<<r<<"cm dan tinggi "<<t<<"cm adalah?";
	cout<<"\nDiketahui : Jari-Jari "<<r<<"cm dan Tinggi "<<t<<"cm";
	cout<<"\nRumus : 3.14*r*r*t";
	cout<<"\nV = 3.14*"<<r<<"*"<<r<<"*"<<t;
	V = phi * r*r*t;
	cout<<"\nVolume Tabung 2 Adalah = "<<V<<"cm";
	
	cout<<"\n \n=============================\n \n";
	
	
	
	
	
	
	return 0;
}
