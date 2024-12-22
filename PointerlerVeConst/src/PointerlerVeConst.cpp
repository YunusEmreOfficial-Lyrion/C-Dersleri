#include <iostream>
using namespace std;

void printArray(const int *ptr1, const int *ptr2){

	for(;ptr1 != ptr2 ; ptr1++){

		cout << "Eleman: " << *ptr1 << endl;
	}

}

int main() {

	/*
	 * Not:
	 * 		Const olarak tanımladığın değer eğer pointer ise içeriğini değiştiremessin ancak
	 * 		pointer değişkeni sıralamasını değiştirebilirsin.
	 * 		Mesela 3.pointerde 7 varsa o 7yi değiştiremessin ama o 3. pointeri 5.pointer yapabilrsin.
	 * */

	int array[] = {10,20,30,40,50,60,70,80,90,100};

	printArray(array+2,array+7);

	/*
	  Out:

	Eleman: 30
	Eleman: 40
	Eleman: 50
	Eleman: 60
	Eleman: 70

	 * */

	return 0;
}
