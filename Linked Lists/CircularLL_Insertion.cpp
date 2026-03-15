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


void insertAtMiddle(Node* &head, int pos, int data){
    Node* curr = head;
    Node* newNode = new Node(data);

    int len = 1;
    
    while (curr->next != head)
    {
        curr = curr->next;
        len++; 
    }

    if(pos == 1 || pos == len+1){ //tail considering
        cout << "This func is for in between positions not for edge cases" << endl;
    }

    curr = head; //reset curr ptr to new location
    // SIMPLE JUST LIKE SINGLY LL
    int count = 1;
    while (count < pos-1)
    {
        curr = curr->next;
        count++;
    }

    newNode->next = curr->next;
    curr->next = newNode;

    
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

    insertAtMiddle(head, 3, 19);
    printCLL(head);
    return 0;
}


//OUPUT:
// 10 -> (back to HEAD)
// 20 -> 10 -> (back to HEAD)
// 30 -> 20 -> 10 -> (back to HEAD)
// 30 -> 20 -> 10 -> 18 -> (back to HEAD)
// 30 -> 20 -> 10 -> 18 -> 11 -> (back to HEAD)      
// 30 -> 20 -> 10 -> 18 -> 11 -> 23 -> (back to HEAD)

// 10 -> (back to HEAD)
// 20 -> 10 -> (back to HEAD)
// 30 -> 20 -> 10 -> (back to HEAD)
// 30 -> 20 -> 10 -> 18 -> (back to HEAD)
// 30 -> 20 -> 10 -> 18 -> 11 -> (back to HEAD)      
// 30 -> 20 -> 10 -> 18 -> 11 -> 23 -> (back to HEAD)
// 30 -> 20 -> 19 -> 10 -> 18 -> 11 -> 23 -> (back to HEAD)  added 19 to 3rd location