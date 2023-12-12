#include <iostream>
using namespace std;

int main(){
	int ilham, amir, *raka;
	//clrscr();
//	ilham = 75;
	cout<<"Input Nilai Ilham dan teman-temannya = ";
	cin>>ilham;
	amir = ilham;
	raka = &ilham;
	cout<<"Nilai ILHAM = "<<ilham<<endl;
	cout<<"Nilai AMIR = "<<amir<<endl;
	cout<<"Nilai RAKA = "<<raka<<endl;
	cout<<"Nilai RAKA = "<<*raka<<endl;
	
	if(ilham == 100){
		cout<<"luarbiasa!!";
	}
	else if(ilham < 100){
		cout<<"Kalian juga keren!!";
	}
	getchar();
}


