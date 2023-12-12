#include<iostream>
#include<string>

struct mahasiswa {
    std::string nama;  
    int umur;
    float ipk;
};

float hitungratarataipk(mahasiswa mahasiswa[], int jumlah) {
    float total = 0;  
    for (int i = 0; i < jumlah; ++i) {
        total += mahasiswa[i].ipk;
    }
    return total / jumlah;
}

int main() {
    const int jumlahmahasiswa = 3;
    mahasiswa daftarmahasiswa[jumlahmahasiswa];  
    for (int i = 0; i < jumlahmahasiswa; ++i) {
        std::cout << "masukan nama mahasiswa " << i + 1 << ": ";  
        std::cin >> daftarmahasiswa[i].nama;
        std::cout << "masukan umur mahasiswa " << i + 1 << ": ";
        std::cin >> daftarmahasiswa[i].umur;
        std::cout << "masukan ipk mahasiswa " << i + 1 << ": ";
        std::cin >> daftarmahasiswa[i].ipk;
    }

    std::cout << "\ndata mahasiswa:\n";
    for (int i = 0; i < jumlahmahasiswa; ++i) {  
        std::cout << "mahasiswa " << i + 1 << "\n";
        std::cout << " nama: " << daftarmahasiswa[i].nama << "\n";
        std::cout << " umur: " << daftarmahasiswa[i].umur << "\n";
        std::cout << " ipk: " << daftarmahasiswa[i].ipk << "\n";
    }

    float ratarata = hitungratarataipk(daftarmahasiswa, jumlahmahasiswa);
    std::cout << "\nrata rata ipk: " << ratarata << "\n";  

    return 0;
}
