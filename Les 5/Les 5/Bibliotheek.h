#pragma once
#include "Boek.h"	
#include <string>

class Bibliotheek
{
public:
	// ctor, cctor, aop, dtor
	Bibliotheek(std::string name);
	~Bibliotheek();
	Bibliotheek(const Bibliotheek& bieb);
	Bibliotheek& operator=(const Bibliotheek&);

	// functions
	void toon();
	void voegToe(std::string type);

	// variables
	std::string biebName;

private:
	Boek* boek = new Boek(); //heap
};

