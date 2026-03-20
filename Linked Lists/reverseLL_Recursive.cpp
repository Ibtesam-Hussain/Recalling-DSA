#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"

using namespace std;

void recursive_Reverse(Node* &head, Node* curr, Node* prev){

    //base case (JAHA FUNC RUKAY GA)
    if (curr == NULL){
        head = prev;
        return;
    }

    // recursive case
    Node* forward = curr->next; 
    recursive_Reverse(head, forward, curr); //jab jab function apne aap ko call krega it means there'll be iteration
    curr->next = prev;  //ye ghoom kr peechy walay node mei link lagta rahega
}



int main(int argc, char const *argv[])
{
    Node* prev = NULL;
    Node* head = new Node(101);
    head->next = new Node(102);
    head->next->next = new Node(103);
    head->next->next->next = new Node(104);
    head->next->next->next->next = new Node(105);
    head->next->next->next->next->next = new Node(106);



    cout << "Original LL : " << endl;
    printLL(head);
    cout << "Recursive Reverse LL : " << endl;
    recursive_Reverse(head, head, prev);  //2nd param head is actually current
    printLL(head);
    return 0;
}


// Original LL :
// 101 -> 102 -> 103 -> 104 -> 105 -> 106 -> 
// Recursive Reverse LL :
// 106 -> 105 -> 104 -> 103 -> 102 -> 101 -> 