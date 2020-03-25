#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

struct gra
{
    string tytul;
    string gatunek;
    int ocena;
};

int main()
{
	gra gra1;
		gra1.tytul = "CS:GO";
		gra1.gatunek = "FPS";
		gra1.ocena = 8;
	
		cout << "Tytul gry to : " << gra1.tytul << endl;
		cout << "Gra jest z gatunku" << gra1.gatunek << endl;
		cout << "Ocena gry : " << gra1.ocena << endl;
		
	cout << "---------------------------" << endl;
	
	gra gra2;
		gra2.tytul = "Tomb Rider";
		gra2.gatunek = "Przygodowe";
		gra2.ocena = 6;
	
		cout << "Tytul gry to : " << gra2.tytul << endl;
		cout << "Gra jest z gatunku" << gra2.gatunek << endl;
		cout << "Ocena gry : " << gra2.ocena << endl;
		

    return 0;
}
