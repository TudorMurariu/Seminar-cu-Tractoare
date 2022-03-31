#pragma once
#include "Tractor.h"
#include "RepoTractor.h"

class ServiceTractor
{
private:
	RepoTractor rep;
public:
	ServiceTractor() = default;
	ServiceTractor(const ServiceTractor& ot) = delete;
	void add(string n, int an)
	{
		Tractor tr{ n, an };
		rep.store(tr);
	}

	vector<Tractor> getAll()
	{
		return rep.getAll();
	}
};

void test_Service();