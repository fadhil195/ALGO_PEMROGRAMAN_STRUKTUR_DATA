#include <iostream>
using namespace std;

const float phi = 3.14; 

float hitungVolumeTabung(int r, int t) {
    float volume;
    volume = phi * r * r * t;
    return volume;
}

void volumeTabung(int r, int t) {
    float V = hitungVolumeTabung(r, t);
    cout << "Volume tabung = " << V;
}

int main() {
    int r, t;
    char ulang;
    do {
        cout << "Menghitung Volume Tabung" << endl;
        cout << "Masukkan Jari-Jari : ";
        cin >> r;
        cout << "Masukkan Tinggi : ";
        cin >> t;
        volumeTabung(r, t);
        cout << endl;
        
        cout << "Ulang Lagi (y/n) : ";
        cin >> ulang;
        cout << endl;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}

