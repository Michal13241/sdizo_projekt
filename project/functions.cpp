#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

void displayMenu(string info)
{
	cout << endl;
	cout << info << endl;
	cout << "1 - Wczytaj z pliku" << endl;
	cout << "2 - Usun" << endl;
	cout << "3 - Dodaj" << endl;
	cout << "4 - Znajdz" << endl;
	cout << "5 - Utworz losowo" << endl;
	cout << "6 - Wyswietl" << endl;
	cout << "7 - Test (pomiary)" << endl;
	cout << "0 - Powrot do menu" << endl;
	cout << "Podaj opcje:" << endl;
}