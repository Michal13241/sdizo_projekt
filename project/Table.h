
#include<conio.h>
#include<string>
#include<iostream>
using namespace std;

class Table
{
	int *tab;
	int cnt = 0;
public:
    void addValue(int index, int value);
    void deleteFromTable(int index);
    bool loadFromFile(string FileName);
    bool IsValueInTable(int val);
    void generateTable(int size);
    void display();
    void menu();
};
