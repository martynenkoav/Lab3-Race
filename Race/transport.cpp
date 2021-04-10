#include "transport.h"
#include <iostream>
transport::transport()
{
	name = "0";
	speed = 0;
	type = false;

}

//void transport::set(std::string new_name, int new_speed, bool new_type) {
//	name = new_name;
//	speed = new_speed;
//	type = new_type;
//}

//transport::transport(std::string new_name, int new_speed, bool new_type) {
//	set(new_name, new_speed, new_type);
//}

void transport::set(std::string new_name) {
	if (new_name == "bactrian camel") {
		speed = 10;
		type = false;
	}
	if (new_name == "fast camel") {
		speed = 40;
		type = false;
	}
	if (new_name == "centaur") {
		speed = 15;
		type = false;
	}
	if (new_name == "all-terrain boots") {
		speed = 6;
		type = false;
	}
	if (new_name == "magic carpet") {
		speed = 10;
		type = true;
	}
	if (new_name == "mortar") {
		speed = 8;
		type = true;
	}
	if (new_name == "broom") {
		speed = 20;
		type = true;
	}
}

std::string transport::get_name() {
	return name;
}

int transport::get_speed() {
	return speed;
}

bool transport::get_type() {
	return type;
}

