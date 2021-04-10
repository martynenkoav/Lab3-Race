

#include <iostream>
#include "transport.h"
#include "earth.h"

int main()
{
	transport first;
	first.set("fast camel");
	std::cout << first.get_speed();
	earth one;
	one.add(first);
	std::cout << one.get_transport().get_speed();
	one.time(1000);

}

