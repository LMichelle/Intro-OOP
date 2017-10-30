#pragma once
#include <string>

class Boek
{
public:
	Boek();
	virtual ~Boek();

	Boek(std::string type);
	std::string _type = "onbekend";
};

