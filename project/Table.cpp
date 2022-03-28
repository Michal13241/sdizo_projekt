#include "Table.h"
#include "functions.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

void Table::generateTable(int size)
{
    srand (time(NULL));
    tab = new int[size];
    for(int i = 0; i < size; i++)
    {
        tab[i] = rand() % 100 + 1;
    }
    cnt = size;
}

void Table::display()
{
    for(int i = 0; i < cnt; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl << "Naciśnij dowolny przycisk aby powrócić";
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
