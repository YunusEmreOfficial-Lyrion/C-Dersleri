#include <iostream>
using namespace std;

struct Employee{
	int id;
	string name;
	string department;

};


int main() {

	/* 1. Gösterim*/
	/*
	Employee employee1 = {12,"Yunus Emre","Bilgisayar"};
	cout << employee1.name << endl;
	 */

	/* 2. Gösterim*/

	Employee employee1;

	employee1.id = 12;
	employee1.name = "Yunus Emre";
	employee1.department = "Bilgisayar";

	cout << employee1.name << endl;


	return 0;
}
