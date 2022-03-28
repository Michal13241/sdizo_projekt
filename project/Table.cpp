#include "Table.h"
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
}

void Table::menu()
{

}