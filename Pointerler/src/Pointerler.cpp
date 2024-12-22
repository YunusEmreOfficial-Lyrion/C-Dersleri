#include <iostream>
using namespace std;

int main() {

	int a = 5;
	int *ptr = &a;

	cout << "Degiskenin Adresi : " << &a ;
	cout << endl;
	cout << "DEgiskenin Adresi : " << ptr ;
	cout << endl;

	cout << "Değişkenin değeri: " << *ptr << endl;

	*ptr = 6;

	cout << "Değişkenin Yeni Değeri: " << a << endl;

	return 0;
}
