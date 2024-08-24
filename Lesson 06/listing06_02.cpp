#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
	cout << "Enter a line of text: " << endl;
	string userInput;
	getline(cin, userInput);

	char copyInput[20] = { '\0' };
	if (userInput.length() < 20) // check bounds
	{
		strcpy(copyInput, userInput.c_str()); // it is unsafe warnings #define _CRT_SECURE_NO_WARNINGS
		//strcpy_s(copyInput, userInput.c_str()); // uncomment it and it will be safe
		cout << "copyInput contains: " << copyInput << endl;
	}
	else
		cout << "Bounds exceeded: won't copy!" << endl;

	return 0;
}