
//UPDATE: I MAKE THIS HEADER FILE BCZ I DONT WANT TO WRITE printLL() FUNC IN EACH FILE 
// AVOIDING THE REDUNDANCY

#ifndef PRINT_NODE_H
#define PRINT_NODE_H

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

//using inline to avoid multiple definitions error in future .cpp files
 
inline void printLL(Node* &head){
    Node* curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " -> ";
        curr = curr->next; 
    }
    cout << endl;
}

inline void printCLL(Node* &head){
    Node* curr = head;
    do
    {
        cout << curr->data << " -> ";
        curr = curr->next;
        
    }
    while (curr != head);
    cout << "(back to HEAD)" << endl;
    
}


#endif