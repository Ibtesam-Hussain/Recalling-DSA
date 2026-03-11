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


//ALL IN ONE INSERTION (ANY POSITION HEAD, MIDDLE, TAIL) 
void insertAtMiddle(Node* &head, int position, int data){
    Node* curr = head; 
    Node* newMiddleNode = new Node(data);

    int count = 0;
    
    // CASE 1: IF POSITION IS SET TO BE AT HEAD
    if(position == 1){
        newMiddleNode->next = head;  //now newMiddleNode next pointer is pointing to curr head
        head = newMiddleNode; //shift  head to newMiddleNode 
        return;
    }


    

    // reach at that pos first
    //UPADTE: THIS ADDING OF ANY ELEM AT ANY POSITION WILL ALSO CORRECT FOR ADDING AT LAST POSITION
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

    insertAtMiddle(head, 1, 1001);
    printLL(head);
    insertAtMiddle(head, 6, 1201);
    printLL(head);
    insertAtMiddle(head, 7, 1201);
    printLL(head);
    insertAtMiddle(head, 8, 1301); //THIS WILL NOT RUN AS POSITION IS OUT OF LENGTH RANGE
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
// 1001 -> 101 -> 102 -> 103 -> 104 -> 105 -> 
// 1001 -> 101 -> 102 -> 103 -> 104 -> 105 -> 1201 ->
// 1001 -> 101 -> 102 -> 103 -> 104 -> 105 -> 1201 -> 1301 -> 