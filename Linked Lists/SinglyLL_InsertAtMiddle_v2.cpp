#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"

using namespace std;

// we have to make LL inorder to insert in the middle 
void insertionAtTail(Node* &head, int data) {
    Node* newNode = new Node(data);

    if (head == nullptr) {          // empty list case
        head = newNode;
        return;
    }


    Node* curr = head;
    while (curr->next != nullptr)    // walk to the last node
        curr = curr->next;

    curr->next = newNode;            // attach the new node
}


// VERSION 2: INSERTION WITH SELECTIVE POSITION
void insertAtMiddle(Node* &head, int position, int data){
    Node* curr = head; 
    Node* newMiddleNode = new Node(data);

    int count = 0;
    
    // reach at that pos first
    while (count < position-1)
    {
        curr = curr->next;
        count++; 
    }

    newMiddleNode->next = curr->next;
    curr->next = newMiddleNode;
    
}

int main(int argc, char const *argv[])
{
    Node* head = NULL;
    
    insertionAtTail(head, 101);
    printLL(head);
    insertionAtTail(head, 102);
    printLL(head);
    insertionAtTail(head, 103);
    printLL(head);
    insertionAtTail(head, 104);
    printLL(head);
    insertionAtTail(head, 105);
    printLL(head);

    cout << "after position middle insertion " << endl;

    insertAtMiddle(head, 3, 1001);

    printLL(head);

    return 0;
}


// OUTPUT:
// 101 ->
// 101 -> 102 ->
// 101 -> 102 -> 103 ->
// 101 -> 102 -> 103 -> 104 ->
// 101 -> 102 -> 103 -> 104 -> 105 ->
// after position middle insertion
// 101 -> 102 -> 103 -> 1001 -> 104 -> 105 ->  