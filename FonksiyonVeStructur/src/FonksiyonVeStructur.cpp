#include <iostream>
using namespace std;

struct Employee{
	int id;
	string name;
	string department;

};


/*		Pointer olsaydı böyleydi
void show(Employee * employee){

	cout << "Id: " << employee -> id << endl;
	cout << "İsim: " << employee -> name << endl;
	cout << "Bölüm: " << employee -> department << endl;

}

*/

void showEmployee(Employee employee){

	cout << "Id: " << employee.id << endl;
	cout << "İsim: " << employee.name << endl;
	cout << "Bölüm: " << employee.department << endl;

}

int main() {

	Employee employee1 = {12,"Yunus Emre", "Bilgisayar"};

	showEmployee(employee1);

	// show(&employee1);  // Pointer olsaydı

	return 0;
}
