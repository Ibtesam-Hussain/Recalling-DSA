#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"  

using namespace std;


void insertAtHead(Node* &head, int data){
    // Node* curr = head;
    Node* newNode = new Node(data);


    Node* temp = head;

    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return;
    }
    while(temp->next != head)
        temp = temp->next;

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
    
    
}

void insertAtTail(Node* &tail, int data)
{
    Node* newNode = new Node(data);
    Node* lastNode = tail;

    while(lastNode->next != tail)
        lastNode = lastNode->next;

    lastNode->next = newNode;
    newNode->next = tail;
}

int main(int argc, char const *argv[])
{
    Node* head = NULL;
    insertAtHead(head, 10);
    printCLL(head);
    insertAtHead(head, 20);
    printCLL(head);
    insertAtHead(head, 30);
    printCLL(head);


    insertAtTail(head, 18);
    printCLL(head);
    insertAtTail(head, 11);
    printCLL(head);
    insertAtTail(head, 23);
    printCLL(head);
    return 0;
}
