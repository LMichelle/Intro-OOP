#pragma once
#include <iostream>
#include "Persoon.h"

class Student : public Persoon
{
public:
	int gemiddeldCijfer;
	int getCijfer(int a, int b, int c);
	Student(int studentLeeftijd, std::string studentNaam);
	~Student();
};

