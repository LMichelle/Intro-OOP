#pragma once
#include <iostream>


class Persoon
{
public:
	int leeftijd;
	std::string naam;

	int getLeeftijd();
	std::string getNaam();

	Persoon();
	~Persoon();
};

