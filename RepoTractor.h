#pragma once
#include "Tractor.h"
#include <vector>

class RepoTractor
{
private:
	vector<Tractor> List;

public:
	void store(Tractor tr)
	{

	}

	vector<Tractor> getAll()
	{
		return List;
	}
	
};

