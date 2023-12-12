#include <iostream>
using namespace std;

int persegi(int s){
	int luas;
	luas = s * s;
	return luas;
}

void luasPersegi(int s){
	int l = persegi(s);
	cout << "Luas Persegi = " << l;
}

int main()
{
	int sisi, r, t;
	char ulang;
	do {
		cout << "Menghitung Luas Persegi"<<endl;
		cout << "Masukkan Sisi : ";
		cin >> sisi;
		luasPersegi(sisi);
		cout << endl;
		
		cout << "Ulang Lagi (y/n) : ";
		cin >> ulang;
		cout << endl;
	}while(ulang == 'y' || ulang == 'Y');
}

