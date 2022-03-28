#include <conio.h>
#include <string>
#include <iostream>
#include "Table.h"
#include "functions.h"
#include "List.h"
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

void listMenu()
{
    List list;
    char opt;
    string fileName;
    int index, value;
    do{
        displayMenu("Lista");
        opt = getch();
        if(opt == '1')
        {

        }
        if(opt == '2')
        {

        }
        if(opt == '3')
        {
            cout << "Podaj liczbe do wpisania do listy: ";
            cin >> value;
            cout << "Podaj indeks listy do ktorego liczba zostanie wpisana:" << endl <<  "(Jezeli liczba bedzie wychodzic poza pozycje w liscie zostanie wpisana na pozycji pierwszej/ostatniej)" << endl;
            cin >> index;
            list.addNode(index, value);
            list.displayFromHead();
            
        }
        if(opt == '4')
        {

        }
        if(opt == '5')
        {
            cout << "Podaj liczbe elementow listy do wygenerowania: ";
            cin >> value;
            list.generateList(value);
            list.displayFromHead();
        }
        if(opt == '6')
        {
            cout << "1 - wyswietl od poczatku" << endl << "2 - wyświetl od końca" << endl << "Podaj numer: ";
            while(true)
            {
                char x;
                x = getchar();
                if(x=='1')
                {
                    list.displayFromHead();
                    break;
                }
                if(x=='2')
                {
                    list.displayFromTail();
                    break;
                }
            }
        }
        if(opt == '7')
        {
            
        }
    } while (opt!='0');
}

int main()
{
    listMenu();
    cout << "Zakonczono dzialanie programu";
    return 0;
}