#include "Table.h"
#include "functions.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>

void Table::generateTable(int size)
{
    srand (time(NULL));
    cnt = size;
    tab = new int[cnt];
    for(int i = 0; i < cnt; i++)
    {
        tab[i] = rand() % 1000 + 1;
    }
}

void Table::display()
{
    cout << "Tabela:" << endl;
    if(cnt==0)
        cout << "Tabela nie istnieje (ma 0 elementów)";
    for(int i = 0; i < cnt; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl << "Nacisnij dowolny przycisk aby powrocic";
    int stop = getch();
}

bool Table::IsValueInTable(int val)
{
    for(int i = 0; i < cnt; i++)
    {
        if(tab[i]==val)
        return true;
    }
    return false;
}

bool Table::loadFromFile(string FileName)
{
    fstream myfile(FileName);
    if(myfile.is_open())
    {
        myfile >> cnt;
        tab = new int[cnt];
        for(int i = 0; i < cnt; i++)
        {
            myfile >> tab[i];
        }
        myfile.close();
        return 1;
    }
    cout << "Nie mozna otworzyc pliku" << endl;
    return 0;
}
