#include<iostream>
using namespace std;

int main(){
	int i = 1, b = 20, c;
	for (int i; i<=b; i++){
		if (i%2==1){
			cout << i << " ";
			c += i;
		}
	}
	cout << " = " << c;
}
