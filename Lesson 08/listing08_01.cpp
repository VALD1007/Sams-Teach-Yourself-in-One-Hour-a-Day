#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	const double Pi = 3.1416;

	// Use & to find address in memory
	cout << "Integer age is located at: 0x" << &age << endl;
	cout << "Double Pi is located at: 0x" << &Pi << endl;

	return 0;
}