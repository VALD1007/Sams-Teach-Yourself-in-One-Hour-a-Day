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

	switch (dayInput)
	{
		case SUNDAY:
			cout << "Sunday was named after the Sun" << endl;
			break;
		case MONDAY:
			cout << "Monday was named after the Moon" << endl;
			break;
		case TUESDAY:
			cout << "Tuesday was named after Mars" << endl;
			break;
		case WEDNESDAY:
			cout << "Wednesday was named after Mercury" << endl;
			break;
		case THURSDAY:
			cout << "Thursday was named after Jupiter" << endl;
			break;
		case FRIDAY:
			cout << "Friday was named after Venus" << endl;
			break;
		case SATURDAY:
			cout << "Saturday was named after Saturn" << endl;
			break;
		default:
			cout << "Wrong input, execute again" << endl;
			break;
	}
	return 0;
}