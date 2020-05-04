#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define PATHFILE "YOURPATHFILE"

int main()
{
	ifstream fichier(PATHFILE);
	string oldline = "";
	int nblines = 1;
	cout << "IP source -> IP destination (number of packet)" << endl;
	if (fichier) {

		string ligne; 
		while (getline(fichier, ligne))
		{
			if (ligne.find("Internet Protocol Version 4") != std::string::npos) {
				ligne.replace(0, 34, "");
				size_t found = ligne.find(",");
				ligne.replace(found, 7, " -> ");
				if (ligne != oldline) 
				{ 
					cout << ligne << "  (" << nblines <<")" << endl;
					nblines = 1;
					oldline = ligne;
				}
				else 
				{
					nblines++;
					oldline = ligne;
				}
			}
		}
		cout << endl << "Made by AntDevPlus" << endl;
		system("PAUSE");
	}
	else {
		cout << "File doesn't exist";
	}
}