#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaSiswa;
    double nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3;

    // Input data dari pengguna
    cout << "Masukkan nama siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan nilai pertandingan 1: ";
    cin >> nilaiPertandingan1;
    cout << "Masukkan nilai pertandingan 2: ";
    cin >> nilaiPertandingan2;
    cout << "Masukkan nilai pertandingan 3: ";
    cin >> nilaiPertandingan3;

    // Menghitung nilai rata-rata
    double rataRata = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3;

    // Menentukan hadiah berdasarkan nilai rata-rata
    if (rataRata >= 85) {
        cout << "Selamat, " << namaSiswa << "! Anda mendapatkan hadiah komputer Core i5." << endl;
    } else if (rataRata >= 70) {
        cout << "Selamat, " << namaSiswa << "! Anda mendapatkan uang sebesar Rp. 2.500.000." << endl;
    } else {
        cout << "Selamat, " << namaSiswa << "! Anda mendapatkan hadiah hiburan." << endl;
    }

    return 0;
}
