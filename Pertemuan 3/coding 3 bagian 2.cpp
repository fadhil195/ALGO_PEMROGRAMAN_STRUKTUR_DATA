#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    float nilai1, nilai2, nilai3;
    float rata_rata;

    cout << "Masukkan Nama Siswa: ";
    getline(cin, nama);

    cout << "Masukkan Nilai Pertandingan 1: ";
    cin >> nilai1;

    cout << "Masukkan Nilai Pertandingan 2: ";
    cin >> nilai2;

    cout << "Masukkan Nilai Pertandingan 3: ";
    cin >> nilai3;

    // Menghitung nilai rata-rata
    rata_rata = (nilai1 + nilai2 + nilai3) / 3;

    cout << "Nilai Rata-rata: " << rata_rata << endl;

    // Menentukan hadiah berdasarkan nilai rata-rata
    int pilihan;
    cout << "Pilih Hadiah: \n";
    cout << "1. Komputer Core i5\n";
    cout << "2. Uang Rp. 2.500.000\n";
    cout << "3. Hadiah Hiburan\n";
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            if (rata_rata >= 85) {
                cout << nama << " mendapat hadiah Komputer Core i5.\n";
            } else {
                cout << "Maaf, nilai rata-rata tidak mencukupi untuk hadiah ini.\n";
            }
            break;
        case 2:
            if (rata_rata >= 70) {
                cout << nama << " mendapat uang sebesar Rp. 2.500.000.\n";
            } else {
                cout << "Maaf, nilai rata-rata tidak mencukupi untuk hadiah ini.\n";
            }
            break;
        case 3:
            cout << nama << " mendapat hadiah hiburan.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            break;
    }

    return 0;
}
