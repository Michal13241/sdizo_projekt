#include<conio.h>
#include<string>
#include<iostream>

struct node
{
    int data;
    node *prev, *next;
};

class List{
    int listLength = 0;
    node *head, *tail;
public:
    List();
    void addNodeToTail(int value);
    void addNodeToHead(int value);
    void addNodeInTheMiddle(int index, int value);
    void addNode(int index, int value);
    void displayFromHead();
    void displayFromTail();
    node* searchIndex(int index);
    node* searchValue(int value);
    void generateList(int size);
    bool isInTheList(int value);
    bool loadFromFile(string FileName);
};