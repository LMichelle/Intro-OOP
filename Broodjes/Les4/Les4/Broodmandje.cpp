#include <iostream>
#include "Broodmandje.h"



Broodmandje::Broodmandje()
{
}

void Broodmandje::toon() {
	//std::cout << "Broodmandje" << broodje._type << std::endl;
	std::cout << "Broodmandje" << broodje->_type << std::endl; // via Heap met een pointer
}

void Broodmandje::voegToe(std::string type) {
	//broodje = Broodje(type); Stack
	broodje = new Broodje(type); // Heap 
}