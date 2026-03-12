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

void deleteAtAnyPos (Node* &head, int pos){
    Node* curr = head;


    // CASE 1
    if(pos = 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // CASE 2
    if (head == NULL){
        return;
    }


    int count = 1;
    while (count < pos-1)
    {
        curr = curr->next;
        count++;       
    }

    // on reaching the position 
    // cout << curr->data << endl;
    Node* nodeToDelete = curr->next;
    curr->next = nodeToDelete->next;
    delete nodeToDelete;

    
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

    cout << "delete at any position " << endl;
    deleteAtAnyPos(head, 4);
    printLL(head);


    return 0;
}


// DELETE HEAD POSITION
// 101 ->
// 102 -> 101 ->
// 103 -> 102 -> 101 ->
// 104 -> 103 -> 102 -> 101 ->        
// 105 -> 104 -> 103 -> 102 -> 101 -> 
// delete at head position
// 104 -> 103 -> 102 -> 101 ->  

// DELETE ANY POSITION
// 101 ->
// 102 -> 101 ->
// 103 -> 102 -> 101 ->
// 104 -> 103 -> 102 -> 101 ->        
// 105 -> 104 -> 103 -> 102 -> 101 -> 
// delete at any position
// 105 -> 103 -> 102 -> 101 -> 