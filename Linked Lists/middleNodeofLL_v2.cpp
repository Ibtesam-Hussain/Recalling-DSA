#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"

using namespace std;


int middleNodev2(Node* &head){
    // fast and slow ptrs concept optimizing T.C
    Node* curr = head;
    Node* fast;
    Node* slow;

    // initializing the pointers
    slow = curr;
    fast = curr->next;
    // fast ptr will jump two nodes ahead and loop stops where fast ptr points to NULL means it reach to end
    while (fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }  
        slow = slow->next;

    }

    // if fast ptr reaches NULL then slow will 2 nodes behind it and reaches at middleNode
    // so fetch slow ptr coz its our target midNode
    return slow->data;


}

int main(int argc, char const *argv[])
{
    Node* prev = NULL;
    Node* head = new Node(101);
    head->next = new Node(102);
    head->next->next = new Node(103);
    head->next->next->next = new Node(104);
    head->next->next->next->next = new Node(105);
    // head->next->next->next->next->next = new Node(106);
    // head->next->next->next->next->next->next = new Node(107);



    cout << "Original LL : " << endl;
    printLL(head);

    cout << "Mid Node : " << middleNodev2(head) << endl;

    return 0;
}

// Original LL :
// 101 -> 102 -> 103 -> 104 -> 105 ->    
// Mid Node : 103
