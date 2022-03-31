#include <iostream>
#include <string>
using namespace std;

#include "RepoTractor.h"
#include "Service.h"
#include "Tractor.h"

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

void test_all()
{
	test_repo();
	test_Service();
}

void print(vector<Tractor> trs)
{
	cout << "Inceput\n";
	for (auto tr : trs)
		cout << tr.getAn() << " " << tr.getNume() << endl;
	cout << "END\n";
}

void addUI(ServiceTractor& serv)
{
	string nume;
	int an;
	cout << "Nume : ";
	cin >> nume;
	cout << "An : ";
	cin >> an;
	serv.add(nume, an);
}

void run();

int main()
{
	test_all();
	run();
	return 0;
}

void run()
{
	ServiceTractor serv;
	while (true)
	{
		cout << "1 Adauga\n2 Tipareste\n0 Iesire\n";
		char cmd;
		cin >> cmd;
		switch (cmd)
		{
		case '0':
			return;
			break;
		case '1':
			addUI(serv);
			break;
		case '2':
			print(serv.getAll());
			break;
		default:
			break;
		}
	}
}