#include <iostream>
#include <stdlib.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next; //next pointer

    // default constructor
    Node(int data){ 
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* &head){
    Node* curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << endl;    
}


int main(int argc, char const *argv[])
{
    Node* node1 = new Node(101);
    Node* node2 = new Node(102);
    Node* node3 = new Node(103);

    Node* head = node1;
    //hardcoded type 
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    printLL(head);
    return 0;
}
