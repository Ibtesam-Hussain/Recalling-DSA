// THIS HEADER WILL BE PRINTING DOUBLY LL NODES


#ifndef PRINT_DOUBLY_NODES_H
#define PRINT_DOUBLY_NODES_H

#include <iostream>
#include <stdlib.h>

using namespace std;

// doubly LL class
class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next= NULL;

    }
};


// using inline keyword
inline void printDLL(Node* &head){
    Node* temp = head;

    cout << "NULL <-> ";
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL";
}

#endif