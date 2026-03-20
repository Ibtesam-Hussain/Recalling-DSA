#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"

using namespace std;


Node* edgeCase(Node* &head){
    if (head == NULL || head->next == NULL){
        return head;
    }
}

// T.C IS O(N) AND S.C IS O(1)
void reverseLL(Node* &head){

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    // handle edge case is any...
    edgeCase(head);

    // looping till curr is NULL
    while (curr != NULL)
    {
        // maintaining a forward link so we dont loose track of the remaining nodes of the LL
        forward = curr->next;

        //iterating to other nodes and setting the curr, prev and forward at their appropriate positions
        curr->next = prev;
        prev = curr;
        curr = forward;

    }
    head = prev; //lastly declare the prev as head bcz forward and curr now pointing at end (NULL)
    
}

int main(int argc, char const *argv[])
{

    //insertion b4 reverse

    // edge case 1
    // Node* head = NULL;
    // edge case 2
    // Node* head = new Node(101);
    // head->next = NULL;

    // normal case
    Node* head = new Node(101);
    head->next = new Node(102);
    head->next->next = new Node(103);
    head->next->next->next = new Node(104);

    cout << "Original LL : " << endl;
    printLL(head);
    cout << "Reversed LL : " << endl;
    reverseLL(head);
    printLL(head);
    return 0;
}


// Original LL :
// 101 -> 102 -> 103 -> 104 ->
// Reversed LL :
// 104 -> 103 -> 102 -> 101 ->