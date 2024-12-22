#include <iostream>
using namespace std;


/*
//void : Çıktı veremiyo anlamında

void selamla(){
	cout << "Naber" << endl;
	cout << "Nasılsın?" << endl;
}


int main() {

	selamla(); // Fonksiyon Çağırıs (function call)

	return 0;
}

*/

void factorial(int sayi){
	int faktroriyel = 1;

	for (int i = 2; i <= sayi; i++){
		faktroriyel *= i;
	}
	cout << "Faktöriyel : " << faktroriyel << endl;
}

int main() {


	int sayi;
	cout << "Sayiyi giriniz.: " ;
	cin >> sayi;

	factorial(sayi);

	return 0;
}
