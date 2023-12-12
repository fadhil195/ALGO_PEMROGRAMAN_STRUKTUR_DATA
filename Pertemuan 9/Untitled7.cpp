#include <iostream>

// Deklarasi fungsi tambah
void tambah(int& x, int& y) {
    x += 5;
    y += 7;
}

int main() {
    // Nilai sebelum fungsi digunakan
    int a = 5, b = 9;
    std::cout << "nilai sebelum fungsi digunakan\n";
    std::cout << "a = " << a << " b = " << b << "\n\n";

    // Nilai didalam fungsi tambah()
    int m = 5, n = 7;
    tambah(m, n);
    std::cout << "nilai didalam fungsi tambah()\n";
    std::cout << "m = " << m << " n = " << n << "\n\n";

    // Nilai setelah fungsi digunakan
    a += m;
    b += n;
    std::cout << "nilai setelah fungsi digunakan\n";
    std::cout << "a = " << a << " b = " << b << "\n";

    return 0;
}
