#include<iostream>
using namespace std;

struct Mahasiswa {
    char nama[20], matkul[15];
    int sks, nim;
};

Mahasiswa pembayaran[2];

int main() {
    int batas, variabel[2], tetap[2];

    for (int i = 0; i < 2; i++) {
        cout << "----------------\n\n";
        cout << "Nama mahasiswa : ";
        cin >> pembayaran[i].nama;
        cout << "NIM :";
        cin >> pembayaran[i].nim;
        cout << "Mata kuliah : ";
        cin >> pembayaran[i].matkul;
        cout << "Jumlah sks : ";
        cin >> pembayaran[i].sks;

        if (pembayaran[i].sks == 0) {
            tetap[i] = 250000;
            variabel[i] = pembayaran[i].sks * 250000;
        } else if (pembayaran[i].sks == 2) {
            tetap[i] = 300000;
            variabel[i] = pembayaran[i].sks * 300000;
        }

        cout << "\nNama= " << pembayaran[i].nama;
        cout << "\nNIM= " << pembayaran[i].nim;
        cout << "\nMata Kuliah= " << pembayaran[i].matkul;
        cout << "\nJumlah SKS= " << pembayaran[i].sks;
        cout << "\nSPP Tetap= " << tetap[i];
        cout << "\nSPP Variabel= " << variabel[i];
    }

    return 0;
}
