#include <iostream>

using namespace std;

int main() {

	int sayi;
	int faktöriyel = 1;

	cout << "Sayı giriniz: " ;
	cin >> sayi;

	for(int i = 1; i <= sayi ; i++ ){

		faktöriyel *= i;

		cout << "Adım " << i << ": "<< " sonuç: " << faktöriyel << endl;

	}

	cout << "Faktöriyel sonucu : " << faktöriyel << endl;

	return 0;
}
