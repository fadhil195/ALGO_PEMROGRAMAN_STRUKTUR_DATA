#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;


int main (){
	int a, b;
	char lagi;
	atas:
		cout << "Masukan bilangan : ";
		cin >> a;
		b = a % 2;
		printf("Nilai %d% % 2 adalah : %d", a, b);
		printf("\nIngin hitung lagi [Y/T] : ");
		lagi = getche();
		if (lagi == 'Y' || lagi == 'y'){
			goto atas;
		}
		getch();
}
