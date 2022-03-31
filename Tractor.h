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
	Tractor(string nume,int an)
	{
		this->nume = nume;
		this->an = an;
	}

	string getNume()
	{
		return nume;
	}
	int getAn()
	{
		return an;
	}
};