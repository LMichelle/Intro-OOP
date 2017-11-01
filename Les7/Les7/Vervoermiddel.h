#pragma once
#include <string>	

class Vervoermiddel
{
public:
	Vervoermiddel();
	int capaciteit;
	int maxKM;
	float prijsPerKM;

	virtual float BerekenPrijs(float prijs, float kilometers);

	virtual float maximaleOpbrengst() = 0;

private:
	
};

