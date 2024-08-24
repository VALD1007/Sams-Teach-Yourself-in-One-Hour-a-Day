#include <iostream>
using namespace std;

int main()
{
	enum DaysOfWeek
	{
		SUNDAY = 0,
		MONDAY,
		TUESDAY,
		WEDNESDAY,
		THURSDAY,
		FRIDAY,
		SATURDAY
	};

	cout << "Find what days of the week are named after!" << endl;
	cout << "Enter a number for a day (Sunday = 0): ";

	int dayInput = SUNDAY; // Initialize to Sunday
	cin >> dayInput;

	if (dayInput == SUNDAY)
		cout << "Sunday was named after the Sun" << endl;
	else if (dayInput == MONDAY)
		cout << "Monday was named after the Moon" << endl;
	else if (dayInput == TUESDAY)
		cout << "Tuesday was named after Mars" << endl;
	else if (dayInput == WEDNESDAY)
		cout << "Wednesday was named after Mercury" << endl;
	else if (dayInput == THURSDAY)
		cout << "Thursday was named after Jupiter" << endl;
	else if (dayInput == FRIDAY)
		cout << "Friday was named after Venus" << endl;
	else if (dayInput == SATURDAY)
		cout << "Saturday was named after Saturn" << endl;
	else
		cout << "Wrong input, execute again" << endl;

	return 0;
}