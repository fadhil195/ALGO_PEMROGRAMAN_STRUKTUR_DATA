#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaSiswa;
    double A, B, C;

    // Input data dari pengguna
    cout << "Masukkan nama siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan nilai pertandingan 1: ";
    cin >> A;
    cout << "Masukkan nilai pertandingan 2: ";
    cin >> B;
    cout << "Masukkan nilai pertandingan 3: ";
    cin >> C;

    // Menghitung nilai rata-rata
    double rataRata = (A + B + C) / 3;

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
