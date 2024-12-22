#include <iostream>
using namespace std;

struct Employee{
	int id;
	string name;
	string department;

};

int main() {

	Employee employee1 = {12,"Yunus Emre","Bilgisayar"};

	Employee *ptr = &employee1;

	cout << employee1.name << endl;   // Obje olarak erişmek istersen

	cout << ptr->department << endl; 	// Pointer olarak erişmek istersen

	return 0;
}
