#include "Persoon.h"
#include <iostream>

Persoon::Persoon() {
}


Persoon::~Persoon() {
}


int Persoon::getLeeftijd() {
	return leeftijd;
}

std::string Persoon::getNaam() {
	return naam;
}