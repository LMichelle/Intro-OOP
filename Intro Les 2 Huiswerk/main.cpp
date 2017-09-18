#include <iostream>
#include <string>
#include "Persoon.h"
#include "Student.h"
#include "Docent.h"

using namespace std;

int main()
{
	Student mijnStudent(20, "Lotte");
	Docent mijnDocent(35, "Jaap");
	cout << "Student: " + mijnStudent.getNaam();
	cout << ", leeftijd: ";
	cout << mijnStudent.getLeeftijd() <<endl;
	cout << mijnStudent.naam;
	cout <<  " staat gemiddeld een ";
	cout <<  mijnStudent.getCijfer(6, 7, 10) << endl;
	cout << "Docent: " + mijnDocent.getNaam();
	cout << ", leeftijd: ";
	cout << mijnDocent.getLeeftijd() << endl;
	cout << mijnDocent.naam;
	cout << " verdient per week ";
	cout << mijnDocent.geldPerWeek(17.50, 40);
	cout << " euro.";
	return 0;
}