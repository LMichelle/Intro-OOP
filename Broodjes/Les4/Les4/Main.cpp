#include <iostream>
#include "Broodmandje.h"

// HEAP versie
void geefMandjeDoor(Broodmandje* mandje) {
	std::cout << "Mandje gekregen" << std::endl;
	mandje->toon();

	mandje->voegToe("croissant");
	mandje->toon();
}

int main() {
	Broodmandje* mandje = new Broodmandje();
	mandje->toon();
	mandje->voegToe("ciabatta");
	mandje->toon();
	geefMandjeDoor(mandje);
	mandje->toon();
	return 0;
}

// STACK versie
//void geefMandjeDoor(Broodmandje mandje) {
//	std::cout << "Mandje gekregen" << std::endl;
//	mandje.toon();
//
//	mandje.voegToe("croissant");
//	mandje.toon();
//}
//
//int main() {
//	Broodmandje mandje = Broodmandje();
//	mandje.toon();
//	mandje.voegToe("ciabatta");
//	mandje.toon();
//	geefMandjeDoor(mandje);
//	mandje.toon();
//	return 0;
//}