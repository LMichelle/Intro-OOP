#pragma once
#include "Boeken.h"

class Bibliotheek
{
public:
	Bibliotheek();
	void toon();
	void voegToe(std::string type);

private:
	Boeken boek;
};

