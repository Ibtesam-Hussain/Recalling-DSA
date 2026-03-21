#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"

using namespace std;


//OVERALL T.C IS O(N) OF THIS APPROACH
int middleNode(Node* &head){
    Node* curr = head;

    int length = 1;

    //O(N) IS THE T.C HERE EVEN IF WE USE STL WHICH IS getlenght()
    while (curr->next != NULL)
    {
        curr = curr->next;
        length++;
    }
    // cout << length << endl;

    int mid;
    if (length % 2 == 0){ //even
        mid = length / 2;
    }
    else { //odd
        mid = (length + 1) / 2;
    }

    curr = head;

    while (mid > 1)
    {
        curr = curr->next;
        mid--;
    }
    
    int midNode = curr->data;
    return midNode;


    
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
    head->next->next->next->next->next->next = new Node(107);



    cout << "Original LL : " << endl;
    printLL(head);

    cout << "Mid Node : " << middleNode(head) << endl;

    return 0;
}


// Original LL :
// 101 -> 102 -> 103 -> 104 -> 105 -> 106 -> 107 -> 
// Mid Node : 104