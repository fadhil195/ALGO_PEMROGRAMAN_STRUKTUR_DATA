#include <iostream>
using namespace std;

int main (){
	int i, m, n;
	m = 0;
	
	cout << "masukan bilangan: ";
	cin >> n;
	
	for(i = 1; i<=n; i++){
		if(n % i == 0){
			m++;
		}
	}
	
	cout << n << " adalah ";
	
	if(m == 2){
		cout << "bilangan prima";
	}else{
		cout << "bukan bilangan prima";
	}
	
	return 0;
	
}
