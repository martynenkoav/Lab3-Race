#pragma once
#include <string>
class transport
{
private: 
	std::string name;
	int speed;
	bool type;
public:
	transport();
	/*transport(std::string);*/
   /* transport(std::string, int, bool);*/
	void set(std::string);
	std::string get_name();
	int get_speed();
	bool get_type();
};

