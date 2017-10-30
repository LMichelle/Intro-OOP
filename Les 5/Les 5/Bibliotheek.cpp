#include "Bibliotheek.h"
#include <iostream>
#include <string>



Bibliotheek::Bibliotheek(std::string name) {
	// constructor
	biebName = name;
	boek = new Boek();
}


Bibliotheek::~Bibliotheek() {
	// destructor
	delete boek;
}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek) {
	// copy constructor
	boek = new Boek();
	boek->_type = bibliotheek.boek->_type;
	
}

Bibliotheek& Bibliotheek::operator=(const Bibliotheek& andereBieb) {
	// assignment operator
	if (this != &andereBieb) {
		if (boek) {
			delete boek;
		}
		boek = new Boek(andereBieb.boek->_type);
		biebName = andereBieb.biebName;
	}
	
	return *this;
}


// functions -------------------
void Bibliotheek::toon() {
	std::cout << biebName << " Boekenlijst: " << boek->_type << std::endl;
}

void Bibliotheek::voegToe(std::string type) {
	delete boek;
	boek = new Boek(type);
}
