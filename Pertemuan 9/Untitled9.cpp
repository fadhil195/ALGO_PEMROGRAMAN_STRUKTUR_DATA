#include <iostream>
using namespace std;

const float phi = 3.14; 

int hitungLuasLingkaran(int r){
    int luas;
    luas = phi * r * r;
    return luas;
}

void luasLingkaran(int r){
    int L = hitungLuasLingkaran(r);
    cout << "Luas lingkaran = " << L;
}

int main() {
    int r;
    char ulang;
    do {
        cout << "Menghitung Luas Lingkaran" << endl;
        cout << "Masukkan Jari-Jari : ";
        cin >> r;
        luasLingkaran(r);
        cout << endl;
        
        cout << "Ulang Lagi (y/n) : ";
        cin >> ulang;
        cout << endl;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}

