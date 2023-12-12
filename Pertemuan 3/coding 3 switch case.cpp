#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama_siswa;
    double nilai1, nilai2, nilai3, rata_rata;
    
    // Input data siswa
    cout << "Masukkan nama siswa: ";
    cin >> nama_siswa;
    cout << "Masukkan nilai pertandingan 1: ";
    cin >> nilai1;
    cout << "Masukkan nilai pertandingan 2: ";
    cin >> nilai2;
    cout << "Masukkan nilai pertandingan 3: ";
    cin >> nilai3;
    
    // Menghitung rata-rata
    rata_rata = (nilai1 + nilai2 + nilai3) / 3.0;
    
    // Menentukan hadiah menggunakan switch case
    cout << "Hasil:\n";
    cout << "Nama siswa: " << nama_siswa << endl;
    cout << "Nilai rata-rata: " << rata_rata << endl;
    
    switch(int(rata_rata)) {
        case 85 ... 100:
            cout << "Hadiah: Komputer Core i5" << endl;
            break;
        case 70 ... 84:
            cout << "Hadiah: Uang sebesar Rp. 2.500.000" << endl;
            break;
        default:
            cout << "Hadiah: Hadiah hiburan" << endl;
            break;
    }
    
    return 0;
}
