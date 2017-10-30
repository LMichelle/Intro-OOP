#include <iostream>
#include "Bibliotheek.h"

void nieuweBoeken(Bibliotheek bieb) {
	std::cout << "We gaan speciale boeken toevoegen!" << std::endl;
	bieb.toon(); //hier nog de kopie
	bieb.voegToe("The Hobbit"); // hier wordt kopie overschreven
	bieb.toon();
}

int main() {
	Bibliotheek bieb = Bibliotheek();
	bieb.toon(); // Leeg
	bieb.voegToe("Harry Potter en de Steen der Wijzen");
	bieb.toon();
	nieuweBoeken(bieb); // geeft kopie bieb
	bieb.toon(); // Laat Harry Potter zien want Stack
	return 0;
}