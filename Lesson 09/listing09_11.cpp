#include <iostream>
using namespace std;

class MonsterDB
{
private:
	~MonsterDB() {} // private destructor

public:
	static void DestroyInstance(MonsterDB* pIntstance)
	{
		delete pIntstance; // member can invoke private destructor
	}

	void DoSomething() {} // sample empty member method
};

int main()
{
	MonsterDB* myDB = new MonsterDB(); // on heap
	myDB->DoSomething();

	// uncomment next line to see compile failure
	// delete myDB; // private destructor  cannot be invoked

	// use static member to release memory
	MonsterDB::DestroyInstance(myDB);

	return 0;
}