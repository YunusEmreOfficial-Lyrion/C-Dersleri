#include <iostream>

using namespace std;

int main() {

	int a,b ;

	string islem ;

	cout << "Hesap makinesi programına hoşgeldiniz: " << endl ;

	cout << "1.İşlem : Toplama işlemi" << endl;

	cout << "2.İşlem : Çıkarma işlemi" << endl;

	cout << "3.İşlem : Çarpma işlemi" << endl;

	cout << "4.İşlem : Bölme işlemi" << endl;

	cout << "Yapmak istediğiniz işlemi giriniz : " ;

	cin >> islem;

	if(islem == "1"){

		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;
		cout << "Toplamları : " << a + b << endl;

	}

	else if (islem == "2"){
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;
		cout << "Farkları : " << a - b << endl;

	}

	else if (islem == "3"){
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;
		cout << "Çarpımları : " << a * b << endl;
	}

	else if (islem == "4"){
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;
		cout << "Bölümleri : " << a / b << endl;
	}

	else {
		cout << "Geçersiz işlem yaptınız. Lütfen '1,2,3,4' sayılarını giriniz. " << endl ;
	}
	return 0;
}
