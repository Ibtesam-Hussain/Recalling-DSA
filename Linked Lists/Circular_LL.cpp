#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"  //circular LL have just one forward links of next ptr just like singly so using the same class of it

using namespace std;




int main(int argc, char const *argv[])
{
    Node* node1 = new Node(12);
    Node* node2 = new Node(13);
    Node* node3 = new Node(14);
    Node* node4 = new Node(15);
    Node* node5 = new Node(16);
    Node* node6 = new Node(17);
    Node* node7 = new Node(18);

    

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node1; //making it in a loop (circular) 

    printCLL(node1);

    
    
    
    
    return 0;
}
