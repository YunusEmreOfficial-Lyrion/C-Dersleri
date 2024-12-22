#include <iostream>

using namespace std;

int main() {

	string parola = "123456" ;

	string input;

	do{

		cout << "Parolanızı Girin:";
		cin >> input;

		if(input != parola){

			cout << "Parolanızı yanlış girdiniz." << endl;

		}

	}while(input != parola);

	cout << "Parolanızı doğru girdiniz..." << endl;

	return 0;
}
