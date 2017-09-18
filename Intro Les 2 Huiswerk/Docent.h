#pragma once
#include <iostream>
#include "Persoon.h"

class Docent : public Persoon
{
public:
	float uurLoon;
	int uurPerWeek;
	float geldPerWeek(float loon, int werkUren);
	Docent(int docentLeeftijd, std::string docentNaam);
	~Docent();
};

