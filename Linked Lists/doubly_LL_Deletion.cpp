#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_doubly_nodes.h"

using namespace std;

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

void deleteAtHead(Node* &head){
    Node* curr = head;
    
    curr->next->prev = NULL; //break the  of agay wala node
    head = curr->next; //move the head label to agay wala node
    curr->next = NULL; // break the link of current head node
    delete curr; //memory free of current head 
}

void deletionAtTail(Node* &tail){
    // cout << "tail is " << tail->data << endl;

    Node* lastNode = tail;
                                    // tail
    // NULL <-> 102 <-> 103 <-> 104 <-> 105 <-> NULL
    tail = tail->prev;
                            // tail
    // NULL <-> 102 <-> 103 <-> 104 <-> 105 <-> NULL
    if (tail != NULL){
        tail->next = NULL;
    }
                            // tail
    // NULL <-> 102 <-> 103 <-> 104 <-> NULL
    delete lastNode;
}


int main(int argc, char const *argv[])
{
    Node* head = new Node(100);
    Node* tail = head;

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

    cout << "Delete at head : " << endl;
    deleteAtHead(head);
    printDLL(head);
    cout << "Delete at head (2): " << endl;
    deleteAtHead(head);
    printDLL(head);

    cout << "Delete at tail : " << endl;
    deletionAtTail(tail);
    printDLL(head);
    return 0;
}


// OUTPUT:
// NULL <-> 100 <-> 101 <-> NULL
// NULL <-> 100 <-> 101 <-> 102 <-> NULL
// NULL <-> 100 <-> 101 <-> 102 <-> 103 <-> NULL
// NULL <-> 100 <-> 101 <-> 102 <-> 103 <-> 104 <-> NULL
// NULL <-> 100 <-> 101 <-> 102 <-> 103 <-> 104 <-> 105 <-> NULL
// Delete at head :
// NULL <-> 101 <-> 102 <-> 103 <-> 104 <-> 105 <-> NULL
// Delete at head (2):
// NULL <-> 102 <-> 103 <-> 104 <-> 105 <-> NULL
// Delete at tail :
// NULL <-> 102 <-> 103 <-> 104 <-> NULL