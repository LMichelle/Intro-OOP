#include <iostream>
#include <fstream>
#include <string>
#define FILE "D:\\Documents\\1. HKU\\Jaar 2\\HOOP\\Intro Les 2 Huiswerk\\Intro-OOP\\Les6\\Les6\\HelloHKU.txt"

int main() {
	char ch;
	std::string data;
	int count = 0;

	// IN FILE
	std::ifstream in_stream;
	in_stream.open(FILE);
	if (!in_stream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}


	// OUT file
	std::ofstream out_stream;
	out_stream.open("MajesticOutFile.txt");
	if (!out_stream) {
		std::cout << "Probleem bij openen out file" << std::endl;
		exit(1);
	}

	// Get amount of characters in the file
	while (getline(in_stream, data)) {
		//std::cout << data << std::endl;
		count += data.length();
	}
	data = ""; // anders blijft de laatste line erin zitten
	in_stream.close();
	

	in_stream.open(FILE); // anders werkt het niet meer, dan staat er een pointer aan het einde van de file.

	for (int i = 0; !in_stream.eof(); i++) {
		in_stream.get(ch);
		data += ch;	
	}
	//std::cout << data;

	for (int i = count; i >= 0; i--) {
		//std::cout << data[i]; 
		out_stream << data[i]; //sorry, maar ik geloof niet dat het is op te lossen zonder enige vorm van array. 
	}
	

	// Close
	out_stream.close();
	in_stream.close();

	return 0;
}