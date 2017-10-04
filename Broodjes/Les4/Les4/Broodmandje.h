#pragma once
#include "Broodje.h"

class Broodmandje
{
public:
	Broodmandje();
	void toon();
	void voegToe(std::string type);

private:
	//Broodje broodje; // is hetzelfde als Broodje broodje = Broodje(); Dit is via automatic allocation, er is geen new, leeft via de stack
	Broodje* broodje = new Broodje(); // deze is via de heap. Het sterretje is de pointer; je krijgt het adres in handen.
};

