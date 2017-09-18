#include "Docent.h"
#include <iostream>


Docent::Docent(int docentLeeftijd, std::string docentNaam)
{
	leeftijd = docentLeeftijd;
	naam = docentNaam;
}


Docent::~Docent()
{
}

float Docent::geldPerWeek(float loon, int werkUren) {
	uurLoon = loon;
	uurPerWeek = werkUren;
	return uurLoon * uurPerWeek;
	
}
