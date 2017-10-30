#include "Bibliotheek.h"
#include <iostream>



Bibliotheek::Bibliotheek()
{
}


void Bibliotheek::toon() {
	std::cout << "Boekenlijst " << boek->_type << std::endl;
}

void Bibliotheek::voegToe(std::string type) {
	boek = new Boeken(type);
}