#include <iostream>
using namespace std;

int main() {

	int array[] = {1,2,3,4};

	int *ptr = array ;

	/*
	cout << array[1] << endl;

	cout << array[3] << endl;

	Out:
	2
	4

	 */

	/*
	cout << array << endl;
	cout << array + 1 << endl;
	cout << array + 2 << endl;
	cout << array + 3 << endl;


	Out :
	0xc9e2fffc50
	0xc9e2fffc54
	0xc9e2fffc58
	0xc9e2fffc5c

	 */

	/*
	cout << ptr << endl;
	cout << ptr + 1 << endl;

	Out :
	0x3309bff870
	0x3309bff874

	*/

	return 0;
}
