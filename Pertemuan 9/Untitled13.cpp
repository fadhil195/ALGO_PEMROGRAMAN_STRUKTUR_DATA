#include <iostream>
using namespace std;

void nilai(string *b) {
    cout << "alamat : " << b << endl;
    cout << "kata : " << *b << endl;
}

void kuadrat(string *str) {
    *str += *str;
}

int main() {
    string kalimat = "Hello";
    nilai(&kalimat);

    cout << "Kalimat: " << kalimat << endl;

    kuadrat(&kalimat);

    return 0;
}
