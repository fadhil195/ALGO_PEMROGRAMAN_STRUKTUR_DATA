#include <iostream>
using namespace std;

int main() {
	int baris, kolom, b2, k2;
	
	cout << "Masukkan Panjang Baris = ";
	cin >> baris;
	b2 = baris; 
	cout << "Masukkan Panjang Kolom = ";
	cin >> kolom;
	k2 = kolom;
	
	int matriks1[baris][kolom];
	int matriks2[baris][kolom];
	
	cout << endl;
	//Input Data Matriks 1
	cout << "Matriks A"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << "Masukkan Nilai Baris "<<i<<" Kolom "<<j<<" = ";
			cin >> matriks1[i][j];
		}
		cout << endl;
	}
	
	//Input Data Matriks 2
	cout << "Matriks B"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << "Masukkan Nilai Baris "<<i<<" Kolom "<<j<<" = ";
			cin >> matriks2[i][j];
		}
		cout << endl;
	}
//Cetak Matriks 1
	cout << "Matriks A"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << matriks1[i][j] << " ";
		}
		cout << endl;
	}
	
	//Cetak Matriks 2
	cout << "Matriks B"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << matriks2[i][j] << " ";
		}
		cout << endl;
	}
//Penjumlahan Matriks
	cout << "Penjumlahan Matriks A + B"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << matriks1[i][j] << " + " << matriks2[i][j]<< " = " << matriks1[i][j]+matriks2[i][j]<<" \t";
		}
		cout << endl;
	}
	
	cout << endl;
	
	//Pengurangan Matriks
	cout << "Pengurangan Matriks A - B"<<endl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << matriks1[i][j] << " - " << matriks2[i][j]<< " = " << matriks1[i][j]-matriks2[i][j]<<" \t";
		}
		cout << endl;
	}
	
	int kali[baris][kolom];
	 for(int i = 0; i < baris; ++i) {
        for(int j = 0; j < k2; ++j)
        {
            kali[i][j]=0;
        }
    }
    
	cout << endl;
	
	//Perkalian Matriks
	cout << "Perkalian Matriks A * B"<<endl;
	for(int i = 0; i < baris; ++i) {
        for(int j = 0; j < k2; ++j) {
            for(int k = 0; k < kolom; ++k)
            {
            	cout << matriks1[i][k] << " * " << matriks2[k][j] << " + ";
                kali[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
        cout << endl;
    }
    
    //Menampilkan Hasil Perkalian
    cout << "Hasil Perkalian Matriks A * B"<<endl;
    for(int i = 0; i < baris; ++i)
    for(int j = 0; j < k2; ++j)
    {
        cout << " " << kali[i][j];
        if(j == k2-1)
            cout << endl;
    }
	
	
	return 0;
}
