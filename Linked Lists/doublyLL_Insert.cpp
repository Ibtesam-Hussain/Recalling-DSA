#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_doubly_nodes.h"

using namespace std;

void insertAtHead(Node* &head, int data){
    Node* curr = head;
    Node* newNode = new Node(data);

    // we already know head's next ptr will always pointing the NULL so,
    curr->prev = newNode;
    newNode->next = curr;
    head = newNode;  //head why explicitly? bcz we have to reference the the exact same pointer (head) which holds the data PASED BY REFERENCE CONCEPT

}


int main(int argc, char const *argv[])
{
    Node* head = new Node(101);
    insertAtHead(head, 102);
    printDLL(head);
    insertAtHead(head, 103);
    printDLL(head);
    insertAtHead(head, 104);
    printDLL(head);
    insertAtHead(head, 105);
    printDLL(head);
    insertAtHead(head, 106);
    printDLL(head);
    
    return 0;
}
