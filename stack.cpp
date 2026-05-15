#include <iostream>
using namespace std;

class node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class stack
{
private:
    Node *top;

public:
    stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
    }
}