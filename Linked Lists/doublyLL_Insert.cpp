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

// UPDATE: MORE SAFER
void insertAtTail(Node* &tail, Node* &head, int data){
    Node* lastNode = tail;
    Node*  newNode = new Node(data);

    // if there's single node its both head/tail but the logic for inserting at would be same
    if(tail == NULL){  //tail or head whatever 
        tail = newNode;
        head = newNode;
        return;
    }


    lastNode->next = newNode;
    newNode->prev = lastNode;
    //change label of tail from lastNode to newNode as newNode will now our tail
    tail = newNode;
    // or wese bhi newNode ka next NULL krny ki need nhi coz wo phele hi class constructor mei defined ha

}

int main(int argc, char const *argv[])
{
    // Node* head = new Node(101);
    Node* head = NULL;
    Node* tail = head;
    // insertAtHead(head, 102);
    // printDLL(head);
    // insertAtHead(head, 103);
    // printDLL(head);
    // insertAtHead(head, 104);
    // printDLL(head);
    // insertAtHead(head, 105);
    // printDLL(head);
    // insertAtHead(head, 106);
    // printDLL(head);

    insertAtTail(tail, head, 101);
    printDLL(head);
    insertAtTail(tail, head, 102);
    printDLL(head);
    insertAtTail(tail, head, 103);
    printDLL(head);
    insertAtTail(tail, head, 104);
    printDLL(head);
    insertAtTail(tail, head, 105);
    printDLL(head);
    
    return 0;
}


// 1.
// OUTPUT: INSERT AT HEAD
// NULL <-> 102 <-> 101 <-> NULL
// NULL <-> 103 <-> 102 <-> 101 <-> NULL
// NULL <-> 104 <-> 103 <-> 102 <-> 101 <-> NULL
// NULL <-> 105 <-> 104 <-> 103 <-> 102 <-> 101 <-> NULL        
// NULL <-> 106 <-> 105 <-> 104 <-> 103 <-> 102 <-> 101 <-> NULL

// 2.
// OUTPUT: INSERT AT TAIL 
// NULL <-> 101 <-> 102 <-> NULL
// NULL <-> 101 <-> 102 <-> 103 <-> NULL
// NULL <-> 101 <-> 102 <-> 103 <-> 104 <-> NULL        
// NULL <-> 101 <-> 102 <-> 103 <-> 104 <-> 105 <-> NULL