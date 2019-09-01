#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

class DLinkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    DLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    void append(int data)
    {
        //Create a Node
        Node *n = new Node(data);

        //Case 1 : check if list is empty
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
    }
};