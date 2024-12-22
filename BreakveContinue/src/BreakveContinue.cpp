#include <iostream>

using namespace std;

int main() {

	/*
	Break : Döngüde break deyimi çalıştırıldığı zaman döngü anında sona erer.
	Continue : Dögüde continue deyimi çalıştırıldığı zaman döngü altındaki komutlar
	çalıştırılmadan başa döner.

	*/

	/* Break Örneği*/
/*
	int i = 0 ;
	while (i < 10 ) {
		if (i == 5){
			break;
		}
		cout << "i: " << i << endl;
		i++;
	}

*/

	/* Continue Örneği*/

/*
	for (int i = 0 ; i < 10 ; i++){
		if(i == 3 || i == 5){
			continue;
		}

		cout << "i: " << i << endl;
	}
*/

	/* Continue hatalı kullanılırsa Örneği*/

/*
	int i = 0;
	while (i < 10){
		if (i == 3 || i == 5){
			i++; // Bu olmassa sonsuz döngüye giriyor.
			continue;
		}

		cout << "i: " << i << endl;
		i++;
	}
*/

	/* While döngüsü ile giriş yaptırma*/

	string sys_username = "Yunus_Emre";
	string sys_password = "12345";

	string username;
	string password;

	while (true){
		cout << "Kullanıcı adınızı giriniz: " << endl ;
		cin >> username;

		cout << "Şifrenizi giriniz: " << endl;
		cin >> password;

		if( sys_username == username && sys_password == password){
			cout << "Hoşgeldiniz...." << username << endl;
			break;
		}
		else if (sys_username != username && sys_password == password){
			cout << "Kullanıcı adınızı yanlış girdiniz."<< endl;
		}
		else if (sys_username == username && sys_password != password){
			cout << "Şifrenizi yanlış girdiniz." << endl;
		}
		else{
			cout << "Kullanıcı adı ve Şifrenizi yanlış girdiniz." << endl;
		}
	}


	return 0;
}
