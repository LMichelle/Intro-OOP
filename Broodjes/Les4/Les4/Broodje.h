#pragma once
#include <string>

class Broodje
{
public:
	Broodje();
	Broodje(std::string type);
	std::string _type = "onbekend";
	~Broodje();
};

