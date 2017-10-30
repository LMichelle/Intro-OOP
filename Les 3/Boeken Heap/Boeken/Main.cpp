#include <iostream>
#include "Bibliotheek.h"

void nieuweBoeken(Bibliotheek* bieb) {
	std::cout << "We gaan speciale boeken toevoegen!" << std::endl;
	bieb->toon(); // referenties
	bieb->voegToe("The Hobbit"); // Object van de referentie wordt overschreven
	bieb->toon();
}

int main() {
	Bibliotheek* bieb = new Bibliotheek();
	bieb->toon(); // Leeg
	bieb->voegToe("Harry Potter en de Steen der Wijzen");
	bieb->toon();
	nieuweBoeken(bieb); // geeft pointer door
	bieb->toon(); // Laat The Hobbit zien want Heap
	return 0;
}