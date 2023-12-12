#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "masukan angka: ";
	cin >> n;
	
	cout << "angka genap dari 1 sampai " << n << " adalah ";
	for (int i = 2; i <= n; i+= 2) {
		cout << i << endl;
	}	
	cout <<endl;
	
	cout << "masukan angka: ";
	cin >> n;
	
	cout << "angka ganjil dari 1 sampai " << n << " adalah ";
	for (int i =1; i <= n; i += 2){
		cout << i <<endl;
	}
	cout << endl;
	
	return 0;
}
