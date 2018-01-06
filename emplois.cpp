#include <iostream>
#include <cstdlib>
#include <fstream>

int main (int argc, char*argv[]) {
	std::cout << "\nEmplois du Temps" << std::endl;
	
	std::string dayOfWeek;
	std::cout <<"Entrez le jour que vous voulez ou sinon le mot clé professeur >> ";
	std::cin >> dayOfWeek;

	std::ifstream readFile;

	if (dayOfWeek == "lundi" || dayOfWeek == "Lundi") readFile.open("jours/lundi.txt");
	else if (dayOfWeek == "mardi" || dayOfWeek == "Mardi") readFile.open("jours/mardi.txt");
	else if (dayOfWeek == "mercredi" || dayOfWeek == "Mercredi") readFile.open("jours/mercredi.txt");
	else if (dayOfWeek == "jeudi" || dayOfWeek == "Jeudi") readFile.open("jours/jeudi.txt");
	else if (dayOfWeek == "vendredi" || dayOfWeek == "Vendredi") readFile.open("jours/vendredi.txt");
	else if (dayOfWeek == "samedi" || dayOfWeek == "Samedi") readFile.open("jours/samedi.txt");
	else if (dayOfWeek == "professeur" || dayOfWeek == "Professeur") readFile.open("jours/professeur.txt");
	else { std::cout << "\nVeuillez entrer un jour entre Lundi et Samedi ou un nom valid\n" << std::endl; exit(0); }

	std::string readFileString;

	std::cout <<"\nEmplois du temps journalié:" << std::endl;
	while (getline(readFile, readFileString)) { std::cout << readFileString << std::endl; }
	readFile.close();
	
	std::cout << "\nAurevoir\n" <<std::endl;

	return 0;
}
