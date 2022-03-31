#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Tractor
{
private:
	string nume;
	int an;

public:
	string getNume()
	{
		return nume;
	}
	int getAn()
	{
		return an;
	}
};