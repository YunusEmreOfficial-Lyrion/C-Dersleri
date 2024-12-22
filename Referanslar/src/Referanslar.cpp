#include <iostream>
using namespace std;

void degerDegistir (int &ref){

	ref = 20;
}

int main() {

	/*		Örnek 1

	int a = 10;

	int &ref = a;

	ref++ ;

	cout << "A'nın yeni değeri : " << a << endl;

	Out:

	A'nın yeni değeri : 11

	*/


	/* 		Örnek 2	 */


	int a = 10;

	cout << "a'nın değeri: " << a << endl;

	degerDegistir(a);

	cout << "a'nın yeni değeri : " << a << endl;

	/*
	Out :

	a'nın değeri: 10
	a'nın yeni değeri : 20
	*/


	/* Pointerlerle referansların farkı pointerlerin başlangıçta değer verme zorunluluğu yok.
	 * Ama referansları tanımlarken başlangıçta değer vermek zorundasın.
	 *
	 * Örnek:
	 *
	 * Pointer kullanımı böyle olur.
	 * int a = 10;
	 * int *ptr;
	 * ptr = &a;
	 *
	 *
	 * Referans kullanımı böyle olmuyor
	 *
	 * int a = 10;
	 *
	 * int &ref;
	 *
	 * ref = a;
	 *
	 * */

	return 0;
}
