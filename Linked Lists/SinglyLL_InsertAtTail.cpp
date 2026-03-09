#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"

using namespace std;


// class Node {
//     public:
//     int data;
//     Node* next;

//     Node (int data){ //deflt constrtr
//         this->data = data;
//         this->next = NULL;
//     }

// };


void insertionAtTail(Node* &head, int data) {
    //PREVIOUS LOGIC:
    //new node create 
    // Node* newNode = new Node(data);

    // //replace curr node next pointer from NULL to newNode
    // newNode = head->next;      // THIS overwrites the pointer

    // //newNode ka jo next pointer ha, point that to forward NULL
    // newNode->next = NULL;     // ➜ dereferencing NULL when head->next is NULL


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
    insertionAtTail(head, 106);
    printLL(head);
    insertionAtTail(head, 107);
    printLL(head);
    return 0;
}


//  HEAD
//  DATA1 | NULL -> DATA2 | NULL -> DATA3 | NULL -> ... NULL

//OUTPUT:
// 101 ->
// 101 -> 102 ->
// 101 -> 102 -> 103 ->
// 101 -> 102 -> 103 -> 104 ->
// 101 -> 102 -> 103 -> 104 -> 105 ->
// 101 -> 102 -> 103 -> 104 -> 105 -> 106 ->        
// 101 -> 102 -> 103 -> 104 -> 105 -> 106 -> 107 ->