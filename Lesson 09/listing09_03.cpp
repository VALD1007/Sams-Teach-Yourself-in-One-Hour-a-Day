#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	Human(); // constructor
	~Human();

	void SetName(string);
	void SetAge(int);

	void IntroduceSelf();

private:
	string name;
	int age;

};

Human::Human()
{
	age = 1; // initialization
	cout << "Constructed an instance of class Human" << endl;
}

Human::~Human()
{
}

void Human::SetAge(int humansAge)
{
	age = humansAge;
}

void Human::SetName(string humansName)
{
	name = humansName;
}

void Human::IntroduceSelf()
{
	cout << "I am " + name << " and am ";
	cout << age << " years old" << endl;
}

int main()
{
	Human firstWoman;
	firstWoman.SetName("Eve");
	firstWoman.SetAge(28);

	firstWoman.IntroduceSelf();

	return 0;
}