#include <iostream>
using namespace std;

int main() {

/*

	//2 Boyutlu matris 3 x 3

	int matris[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};

	cout << matris[0][1] << endl;
	cout << matris[2][2] << endl;
	cout << matris[1][1] << endl;

	output :
	2
	9
	5


	for(int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j++){

			cout << matris[i][j] << " " ;
		}
		cout << endl;
	}

*/

	//2 Boyutlu matris 3 x 3  Kullanıcıdan girdi verdirme

	int matris[3][3];

	cout << "Matris değerini giriniz: " << endl;

	for (int i = 0 ; i < 3 ; i++){

		for (int j = 0 ; j < 3 ; j++){
			cin >> matris[i][j];
		}
	}
	cout << "Matris : " << endl;

	for(int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j++){

			cout << matris[i][j] << " " ;
		}
		cout << endl;
	}

	return 0;
}
