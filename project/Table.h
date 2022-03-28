
#include<conio.h>
#include<string>
#include<iostream>
using namespace std;

class Table
{
	int *tab;
	int cnt;
public:
    bool IsValueInTable(int val);
    void generateTable(int size);
    void display();
    void menu();
};
