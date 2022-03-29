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
            cout << "Podaj indeks liczby z ktorego liczba ma byc usunieta: ";
            cin >> index;
            tab.deleteFromTable(index);
            tab.display();
        }
        if(opt == '3')
        {
            cout << "Podaj wartosc liczby do wpisania: ";
            cin >> value;
            cout << "Podaj indeks tablicy pod ktory liczba ma byc wpisana: " << endl <<  "(Jezeli liczba bedzie wychodzic poza pozycje w tablice zostanie wpisana na pozycji pierwszej/ostatniej)" << endl;;
            cin >> index;
            tab.addValue(index, value);
            tab.display();
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
            cout << "Podaj nazwe pliku z rozszerzeniem do wczytania: ";
            cin >> fileName;
            list.loadFromFile(fileName);
            list.displayFromHead();
        }
        if(opt == '2')
        {
            cout << "Podaj wartosc liczby do usuniecia z listy: ";
            cin >> value;
            list.deleteFromList(value);
            list.displayFromHead();
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
            cout << "Podaj liczbe do znalezienia w liscie: ";
            cin >> value;
            if(list.isInTheList(value))
                cout << "liczba znajduje sie w tablicy" << endl;
            else
                cout << "liczby nie znaleziono w tablicy" << endl;
            list.displayFromHead();
            
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
    char opt;
    do
    {
        cout << "1 - Tablica" << endl << "2 - Lista" << endl << "0 - zakoncz program" << endl << "Podaj opcje: " << endl;
        opt = getch();
        if(opt=='1')
            tableMenu();
        if(opt=='2')
            listMenu();
    } while (opt!='0');
    cout << endl << "Zakonczono dzialanie programu";
    return 0;
}