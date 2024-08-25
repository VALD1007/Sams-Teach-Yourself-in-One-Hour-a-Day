#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	Human(string humansName, int humansAge);
	~Human();

	void IntroduceSelf();

private:
	string name;
	int age;
};

Human::Human(string humansName, int humansAge)
{
	name = humansName;
	age = humansAge;
	cout << "Overloaded constructor creates " << name;
	cout << " of age " << age << endl;
}

Human::~Human()
{
}

void Human::IntroduceSelf()
{
	cout << "I am " + name << " and am ";
	cout << age << " years old" << endl;
}

int main()
{
	Human firstMan("Adam", 25);
	Human firstWoman("Eve", 28);

	firstMan.IntroduceSelf();
	firstWoman.IntroduceSelf();

	return 0;
}