#include "Student.h"
#include <iostream>


Student::Student(int studentLeeftijd, std::string studentNaam)
{
	leeftijd = studentLeeftijd;
	naam = studentNaam;
}


Student::~Student()
{
}

int Student::getCijfer(int a, int b, int c) {
	gemiddeldCijfer = (a + b + c) / 3;
	return gemiddeldCijfer;
}

