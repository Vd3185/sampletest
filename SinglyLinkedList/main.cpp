#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    ~LinkedList()
    {
        Node *next;
        while (head != NULL)
        {
            next = head->next;
            delete head;
            head = next;
        }
    }

    int getSize()
    {
        return size;
    }

    void append(int data)
    {
        //Create a Node
        Node *n = new Node(data);

        //Case 1 : Check if list is empty
        if (head == NULL)
        {
            head = n;
            tail = n;
        }

        //Case 2 : List is not empty
        else
        {
            tail->next = n;
            tail = n;
            tail->next = NULL;
        }

        //increment size counter
        size++;
    }

    void prepend(int data)
    {
        //Create a Node
        Node *n = new Node(data);

        //Case 1 : Check if list is empty
        if (head == NULL)
        {
            head = n;
            tail = n;
        }

        //Case 2 : List is not empty
        else
        {
            Node *temp = head;
            head = n;
            n->next = tail;
        }

        //increment the size counter
        size++;
    }

    void toString()
    {
        //Create a temp pointer that points to first node
        Node *temp = head;

        //Create a loop that stops when pointer is null
        while (temp != NULL)
        {
            //Print Data
            cout << temp->data << " ";
            //Advance pointer to next node
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.prepend(4);
    list.toString();
    int count = list.getSize();
    cout << count << "count";
};