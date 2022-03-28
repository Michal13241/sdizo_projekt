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
        if(opt == '0')
        {
            
        }
        if(opt == '1')
        {
            
        }
        if(opt == '2')
        {
            
        }
        if(opt == '3')
        {
            
        }
        if(opt == '4')
        {
            
        }
        if(opt == '5')
        {
            cout << "Podaj ilość elementów tablicy:";
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
    setlocale( LC_ALL, "pl_PL" );
    tableMenu();
}