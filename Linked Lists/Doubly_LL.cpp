#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_doubly_nodes.h"

using namespace std;

// // doubly LL class
// class Node {
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data){
//         this->data = data;
//         this->prev = NULL;
//         this->next= NULL;

//     }
// };




int main(int argc, char const *argv[])
{
    //doubly LL starter

    Node* node1 = new Node(101);  //1st node
    Node* node2 = new Node(102); //2nd node
    Node* node3 = new Node(103); //3nd node

    //node1 links
    node1->prev = NULL;
    node1->next = node2;

    //node2 links
    node2->prev = node1;
    node2->next = node3;

    //node3 links
    node3->prev = node2;
    node3->next = NULL;

    // Node* temp = node1;

    // cout << "NULL <-> ";
    // while (temp != NULL)
    // {
    //     cout << temp->data << " <-> ";
    //     temp = temp->next;
    // }
    // cout << "NULL";

    printDLL(node1);

    // overall
    // NULL <- PREV|DATA1|NEXT -> <- PREV|DATA2|NEXT -> <- PREV|DATA3|NEXT -> NULL
    return 0;
}

// OUTPUT:
// NULL <-> 101 <-> 102 <-> 103 <-> NULL