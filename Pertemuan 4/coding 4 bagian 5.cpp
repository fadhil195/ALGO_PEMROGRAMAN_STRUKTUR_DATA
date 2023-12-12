#include<iostream>
using namespace std;

int main() {

    // Mendeklarasikan variabel x (input) dan bil (penghitung)
    int x, bil = 0;

    // Meminta pengguna untuk memasukkan batas atas
    cout << "Masukan bilangan pembatas akhir : ";
    cin >> x;

    // Melakukan loop do-while
    do {
        // Memeriksa apakah bil lebih besar atau sama dengan x
        if (bil >= x) {
            // Jika benar, keluar dari loop
            break;
        }

        // Menampilkan nilai saat ini dari bil
        cout << bil << " ";
    } while (bil += 4); // Menambahkan bil sebanyak 4 dan melanjutkan perulangan

    // Menunggu input dari pengguna (tekan Enter) sebelum menutup konsol
    getchar();
}

