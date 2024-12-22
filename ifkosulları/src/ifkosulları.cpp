#include <iostream>

using namespace std;

int main() {

	string password = "yedmedya";

	string input ;

	cout << "Lütfen parolanızı giriniz: " ;

	cin >> input ;

	if(input == password){

		cout << "Parolanızı doğru girdiniz." ;

	}

	else {
		cout << "Parolanızı yanlış girdiniz." ;
	}
	return 0;
}
