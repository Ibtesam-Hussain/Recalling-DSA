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


void insertAtMiddle(Node* &head, int data){
    Node* curr = head; 
    Node* newMiddleNode = new Node(data);

    int len = 0;
    
    while (curr->next != NULL)
    {
        curr = curr->next;
        len++; 
    }

    int midOfLL;
    if (len % 2 == 0){
        midOfLL = len / 2;
    }
    else{
        midOfLL = (len + 1) / 2;
    }
    
    //DEBUG:
    // cout << "len " << len;
    // cout << "mid " << midOfLL;

    curr = head; //update curr pointer 

    //  HEAD
    //  DATA1 | NULL -> DATA2 | NULL -> DATA3 | NULL -> DATA_4 | NULL -> DATA_5 | NULL -> ... NULL
    // mid is 2 then this while loop will make the DATA3 node temp head just before the insertion of newNode 
    
    while (midOfLL > 1)
    {
        curr = curr->next;
        midOfLL--;
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

    cout << "after middle insert " << endl;

    insertAtMiddle(head, 1001);
    printLL(head);
    insertAtMiddle(head, 1002);
    printLL(head);

    insertAtMiddle(head, 1003);
    printLL(head);

    // printLL(head);

    return 0;
}
