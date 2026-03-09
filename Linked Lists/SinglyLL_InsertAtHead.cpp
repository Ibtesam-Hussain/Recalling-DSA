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

void insertionAtHead(Node* &head, int data){ //Node* &head will provide the exact addr of the node, not just making the copy
    //creating a new node
    Node* newNode = new Node(data);
    //newNode ke next pointer ko point kro to current head node  
    newNode->next = head;
    //current node se head hata place the head label to newNode
    head = newNode;

    //  noice
    

}

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
    //NOW ITS NO NEED TO CREATE A HARDCODED STARTER NODE, JUST CALL THE INSERT FUNC
    // Node* node = new Node(10);

    Node * head = NULL;
    insertionAtHead(head, 101);
    printLL(head);
    insertionAtHead(head, 102);
    printLL(head);
    insertionAtHead(head, 103);
    printLL(head);
    insertionAtHead(head, 104);
    printLL(head);
    insertionAtHead(head, 105);
    printLL(head);
    insertionAtHead(head, 106);
    printLL(head);
    insertionAtHead(head, 107);
    printLL(head);


    return 0;
}
//              HEAD
//  NULL ... <- DATA1 | NULL <- DATA1 | NULL <- DATA1 | NULL

//OUTPUT: 
// 101 ->
// 102 -> 101 ->
// 103 -> 102 -> 101 ->
// 104 -> 103 -> 102 -> 101 ->
// 105 -> 104 -> 103 -> 102 -> 101 ->
// 106 -> 105 -> 104 -> 103 -> 102 -> 101 ->        
// 107 -> 106 -> 105 -> 104 -> 103 -> 102 -> 101 ->