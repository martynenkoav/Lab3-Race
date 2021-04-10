#pragma once
#include "transport.h"
#include <vector>
class earth
{
private:
	int RestInterval;
	double RestDuration[3];
	transport Transp;
public:
	void add();
	transport get_transport();
	double time(size_t dist);
};

