#include "earth.h"
#include <iostream>
#include "transport.h"

void earth::add() {
	if (Transp.get_type() == 0) {
		if (Transp.get_name() == "bactrian camel") {
			RestInterval = 30;
			RestDuration[0] = 5;
			RestDuration[1] = 8;
			RestDuration[2] = 8;
		}
		if (new_transport.get_name() == "fast camel") {
			RestInterval = 10;
			RestDuration[0] = 5;
			RestDuration[1] = 6.5;
			RestDuration[2] = 8;
			Transp = new_transport;
		}
		if (new_transport.get_name() == "centaur") {
			RestInterval = 8;
			RestDuration[0] = 2;
			RestDuration[1] = 2;
			RestDuration[2] = 2;
			Transp = new_transport;
		}
		if (new_transport.get_name() == "centaur") {
			RestInterval = 60;
			RestDuration[0] = 10;
			RestDuration[1] = 5;
			RestDuration[2] = 5;
			Transp = new_transport;
		}
	}
	else {
		std::cout << "Air instead earth";
	}

}

transport earth::get_transport() {
	return Transp;
}

double time(double dist) {
	double time;
	time = 0;
	int my_speed;
	int count;
	my_speed=Transp.get_speed();
	if (my_speed == 0) {
		std::cout << "error";
	}
	else {
		time = dist / my_speed;
	}
	if (time > RestInterval) {
		count = trunc(time / RestInterval);
		while (count > 0)
		{
			if (count > 2) {
				time += RestDuration[2];
			}
			if (count == 2) {
				time += RestDuration[1];
			}
			if (count == 1) {
				time += RestDuration[0];
			}
			count--;
		}
	}
	return time;
}