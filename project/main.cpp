#include <conio.h>
#include <string>
#include <iostream>
#include "Table.h"
#include "functions.h"
using namespace std;

void tableMenu()
{
    Table tab;
    char opt;
    string fileName;
    int index, value;
    do{
        displayMenu("Tablica");
        opt = getch();
        if(opt == '1')
        {
            string nazwa;
            cout << "Podaj nazwę pliku: ";
            cin >> nazwa;
            if(tab.loadFromFile(nazwa))
                tab.display();
        }
        if(opt == '2')
        {
            
        }
        if(opt == '3')
        {

        }
        if(opt == '4')
        {
            cout << "Podaj wartosc liczby do znalezienia w tablicy:";
            cin >> value;
            if(tab.IsValueInTable(value))
                cout << "liczba znajduje sie w tablicy" << endl;
            else
                cout << "liczby nie znaleziono w tablicy" << endl;
            tab.display();
        }
        if(opt == '5')
        {
            cout << "Podaj ilosc elementow tablicy do wygenerowania:";
			cin >> value;
			tab.generateTable(value);
			tab.display();
        }
        if(opt == '6')
        {
            tab.display();
        }
        if(opt == '7')
        {
            
        }
    } while (opt!='0');
}

int main()
{
    tableMenu();
    cout << "Zakonczono dzialanie programu";
    return 0;
}