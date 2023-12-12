#include <iostream>
using namespace std;

int pangkat(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        int hasil;
        hasil = x * pangkat(x, y - 1);
        return hasil;
    }
}

int main() {
    int x, y, hasil;

    cout << "Masukkan Nilai X = ";
    cin >> x;
    cout << "Masukkan Nilai Y = ";
    cin >> y;

    hasil = pangkat(x, y);
    cout << x << " dipangkatkan " << y << " = " << hasil;
    return 0;
}
