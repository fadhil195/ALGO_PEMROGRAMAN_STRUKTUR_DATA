#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama_siswa;
    double X, Y, Z;

    // Input data siswa
    cout << "Masukkan nama siswa: ";
    cin >> nama_siswa;
    cout << "Masukkan nilai pertandingan 1: ";
    cin >> X;
    cout << "Masukkan nilai pertandingan 2: ";
    cin >> Y;
    cout << "Masukkan nilai pertandingan 3: ";
    cin >> Z;

    // Menghitung rata-rata
    double rata_rata = (X + Y + Z) / 3.0;

    // Menentukan hadiah
    if (rata_rata >= 85) {
        cout << nama_siswa << " mendapatkan hadiah komputer core i5" << endl;
    } else if (rata_rata >= 70) {
        cout << nama_siswa << " mendapatkan uang sebesar Rp. 2.500.000" << endl;
    } else {
        cout << nama_siswa << " mendapatkan hadiah hiburan" << endl;
    }

    return 0;
}
