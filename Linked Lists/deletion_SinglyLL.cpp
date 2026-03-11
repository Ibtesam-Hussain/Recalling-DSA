#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"

using namespace std;


void insertionAtHead(Node* &head, int data){ //Node* &head will provide the exact addr of the node, not just making the copy
    //creating a new node
    Node* newNode = new Node(data);
    //newNode ke next pointer ko point kro to current head node  
    newNode->next = head;
    //current node se head hata place the head label to newNode
    head = newNode;

    //  noice
    

}

void deleteHead(Node* &head){
    head = head->next; //2ND ELEM IN THE LL BECOMES HEAD WHILE THE ORIGINAL HEAD STILL REMAINS IN THE MEMRY
}

int main(int argc, char const *argv[])
{
    Node * head = NULL;
    insertionAtHead(head, 101);
    printLL(head);
    insertionAtHead(head, 102);
    printLL(head);
    insertionAtHead(head, 103);
    printLL(head);
    insertionAtHead(head, 104);
    printLL(head);
    insertionAtHead(head, 105); //head
    printLL(head);

    cout << "After deleting head " << endl;
    deleteHead(head);
    printLL(head);
    return 0;
}
