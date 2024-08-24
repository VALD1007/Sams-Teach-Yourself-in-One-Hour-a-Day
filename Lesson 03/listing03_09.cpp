#include <iostream>
using namespace std;

enum CardinalDirections
{
	NORTH = 25, 
	SOUTH,
	EAST,
	WEST
};

int main()
{
	cout << "Displaying directions and their symbolic values" << endl;
	cout << "North: " << NORTH << endl;
	cout << "South: " << SOUTH << endl;
	cout << "East: " << EAST << endl;
	cout << "West: " << WEST << endl;

	CardinalDirections windDirection = SOUTH;
	cout << "Variable windDirection = " << windDirection << endl;

	return 0;
}