#include<iostream>
using namespace std;

int main(){
	int i = 1, b = 20, x;
	for (int i; i<=b; i++){
		if (i%2==0){
			cout << i << " ";
			x += i;
		}
	}
	cout << " = " << x;
	
}
