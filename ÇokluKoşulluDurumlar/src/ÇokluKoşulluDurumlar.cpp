#include <iostream>

using namespace std;

int main() {

	/*
	  or operatörü || ---> En az bir durum doğruysa genel sonuç true, aksi halde false döner.
	  and operatörü && ---> En az bir durum yanlışsa genel sonuç durum false, aksi halde true döner.
	  not operatörü ! ---> false işlemi true'ya , true işlemi false'ye çevirir.

	 */

	string sys_username = "Yunus_Emre";
	string sys_password = "123456";

	string username ;
	string password;

	cout << "Kullanıcı adınızı giriniz:";

	cin >> username ;

	cout << "Şifrenizi giriniz: ";

	cin >> password ;

	if( sys_username == username && sys_password == password){

		cout << "Hoşgeldiniz. " << username << endl;

	}

	else if (sys_username != username && sys_password == password){

		cout << "Kullanıcı adı hatalı..." << endl ;

	}

	else if (sys_username == username && sys_password != password){
		cout << "Şifre hatalı..." << endl ;

	}

	else {
		cout << "Kullanıcı adı ve parola hatalı..." << endl ;
	}

	return 0;
}
