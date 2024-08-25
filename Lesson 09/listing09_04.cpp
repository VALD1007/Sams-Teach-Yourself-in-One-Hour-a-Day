#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	Human();  // default constructor
	Human(string humansName, int humansAge);  // overloaded
	~Human();

private:
	string name;
	int age;

};

Human::Human()
{
	age = 0; // initialized to ensure no junk value
	cout << "Default constructor: name and age not set" << endl;
}
Human::Human(string humansName, int humansAge)
{
	name = humansName;
	age = humansAge;
	cout << "Overloaded constructor creates ";
	cout << name << " of " << age << " years" << endl;
}

Human::~Human()
{

}

int main()
{
	Human firstMan; // use default constructor
	Human firstWoman("Eve", 20); // use overloaded constructor

	return 0;
}