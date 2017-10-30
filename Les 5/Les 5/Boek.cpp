#include "Boek.h"
#include <iostream>


Boek::Boek() {
	std::cout << "in boek constructor" << std::endl;
}


Boek::~Boek() {
	//std::cout << "in boek destructor" << std::endl;
}

Boek::Boek(std::string type) {
	_type = type;
}