#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>
#include "List.h"
using namespace std;

List::List()
{
    int listLength = 0;
    head = NULL;
    tail = NULL;
}

void List::addNode(int index, int value)
{
    if(index<=0) addNodeToHead(value);
    else if(index>=listLength-1) addNodeToTail(value);
    else addNodeInTheMiddle(index, value);
    listLength++;
}

void List::addNodeToTail(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    temp->prev = tail;

    if(head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = tail->next;
    return;
}

void List::addNodeToHead(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = head;
    temp->prev = NULL;
    
    if(head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    head->prev = temp;
    head = head->prev;
    return;
}

void List::addNodeInTheMiddle(int index, int value)
{
    node *temp = new node;
    temp->data = value;
    temp->prev = searchIndex(index - 1);
    temp->next = searchIndex(index);
    temp->prev->next = temp;
    temp->next->prev = temp;
}

void List::displayFromHead()
{
    node *temp;
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << "Nacisnij dowolny przycisk aby powrocic";
    int stop = getch();
    return;
}

void List::displayFromTail()
{
    node *temp;
    temp = tail;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl << "Nacisnij dowolny przycisk aby powrocic";
    int stop = getch();
    return;
}

node* List::searchIndex(int index)
{
    node *temp;
    temp = head;
    for(int i = 0; i < index && head != NULL ; i++)
    {
        temp = temp->next;
    }
    return temp;
}

node* List::searchValue(int value)
{
    node *temp;
    temp = head;
    while(temp != NULL)
    {
        if(temp->data == value)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void List::generateList(int size)
{
    srand (time(NULL));
    for(int i = 1; i < size+1; i++)
    {
        addNode(i, rand() % 1000 + 1);
    }
}

bool List::isInTheList(int value)
{
    node *temp;
    temp = searchValue(value);
    if(temp == NULL)
    {
        return false;
    }
    return temp;
}

bool List::loadFromFile(string value)
{
    
}
