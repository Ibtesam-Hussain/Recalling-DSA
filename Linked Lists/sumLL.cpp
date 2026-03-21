#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"

using namespace std;


// SUMMATION OF NTH LINKED LIST

int sumLL(Node* &head){
    Node* curr = head;

    int sum = 0;


    while (curr != NULL)
    {
        sum += curr->data; //data adding up
        curr = curr->next; //iterator
    }
    
    return sum;
}


int main(int argc, char const *argv[])
{
    // Node* head = NULL;

    // Node* head = new Node(23);



    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);



    cout << "Original LL : " << endl;
    printLL(head);

    cout << "Sum of LL is : " << sumLL(head) << endl;
    return 0;
}