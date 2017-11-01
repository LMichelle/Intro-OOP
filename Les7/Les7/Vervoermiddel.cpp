#include "Vervoermiddel.h"
#include <iostream>


Vervoermiddel::Vervoermiddel()
{
}

float Vervoermiddel::BerekenPrijs(float prijs, float kilometers) {
	return prijs * kilometers;
}

float Vervoermiddel::maximaleOpbrengst() {}
