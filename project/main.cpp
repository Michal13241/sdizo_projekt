#include <conio.h>
#include <string>
#include <iostream>
#include "Table.h"
using namespace std;

int main()
{
    int a;
    Table tab;
    cin >> a;
    tab.generateTable(a);
    tab.display();
}