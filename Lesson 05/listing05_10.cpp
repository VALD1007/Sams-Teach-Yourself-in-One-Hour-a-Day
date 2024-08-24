#include <iostream>
using namespace std;

int main()
{
	cout << "Use sizeof to determine memory used by arrays" << endl;
	int myNumber[100] = { 0 };

	cout << "Bytes used by an int: " << sizeof(int) << endl;
	cout << "Bytes used by myNumbers: " << sizeof(myNumber) << endl;
	cout << "Bytes used by an element: " << sizeof(myNumber[0]) << endl;

	return 0;
}