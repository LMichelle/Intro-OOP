#include <iostream>
#include "Bibliotheek.h"

int main() {
	Bibliotheek bieb1 = Bibliotheek("Smalland Bibliotheken");
	bieb1.voegToe("Harry Potter");
	bieb1.toon();

	Bibliotheek bieb2("Boe"); // Helaas moet ik wel iets invullen, want Bibliotheek bieb2 = bieb1 werkt niet. Dan roept ie de default constructor aan.
	bieb2 = bieb1;
	bieb2.toon();
	return 0;
}