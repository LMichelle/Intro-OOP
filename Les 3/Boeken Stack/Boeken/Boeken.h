#pragma once
#include <string>
class Boeken
{
public:
	Boeken();
	Boeken(std::string type);
	std::string _type = "onbekend";
	~Boeken();
};

