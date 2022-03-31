#include <iostream>
#include <string>
using namespace std;

class Pet{

	string nume;
public:
	Pet() 
	{
		cout << "constructor\n";
	}

	~Pet()
	{
		cout << "destructor\n";
	}
};

void f(Pet p)
{

}

Pet g()
{
	Pet p;
	return p;
}

int main()
{
	Pet p;
	return 0;
}
