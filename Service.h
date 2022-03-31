#pragma once
#include "Tractor.h"
#include "RepoTractor.h"
#include <algorithm>

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
		auto v = rep.getAll();
		sort(v.begin(), v.end(), [](Tractor& a, Tractor& b) {
			return a.getAn() < b.getAn();
			});
		return v;
	}
};

void test_Service();