#include <iostream>
#include <stdlib.h>
#include "redundantFuncs/print_node.h"

using namespace std;


void insertionAtHead(Node* &head, int data){ //Node* &head will provide the exact addr of the node, not just making the copy
    //creating a new node
    Node* newNode = new Node(data);
    //newNode ke next pointer ko point kro to current head node  
    newNode->next = head;
    //current node se head hata place the head label to newNode
    head = newNode;

    //  noice
    

}

void deleteHead(Node* &head){
    //2ND ELEM IN THE LL BECOMES HEAD WHILE THE ORIGINAL HEAD STILL REMAINS IN THE MEMRY
    // head = head->next; 
    
    // MORE SAFER APPROACH BECAUSE I AM PLAYING WITH THE ORIGINAL HEAD NOT MAKING COPY OF IT 
    Node* temp = head;
    head = head->next;
    delete temp; //free from memory too
}

void deleteTail(Node* &head){
    // traverse till end
    Node* curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    //agr curr->next barabar hogya NULL ke tou wohi hamara tail ha or usko hi delete krna ha
    // cout << curr->data << endl;
    delete curr->next;
    curr->next = NULL;
    
}

void deleteMiddleNode(Node* &head){
    Node* curr = head;
    int length = 0;
    while (curr->next != NULL)
    {
        curr = curr->next;
        length++;
    }
    
    int mid;
    if (length % 2 == 0){
        mid = length / 2;
    }
    else{
        mid = (length + 1) / 2;
    }

    // update curr pointer Node, so its one node before middle node
    curr = head;

    Node* nodeToDelete = curr->next;
    curr->next = nodeToDelete->next;
    delete nodeToDelete;

    

}

int main(int argc, char const *argv[])
{
    Node * head = NULL;
    insertionAtHead(head, 101);
    printLL(head);
    insertionAtHead(head, 102);
    printLL(head);
    insertionAtHead(head, 103);
    printLL(head);
    insertionAtHead(head, 104);
    printLL(head);
    insertionAtHead(head, 105); //head
    printLL(head);

    cout << "After deleting head " << endl;
    deleteHead(head);
    printLL(head);

    cout << "After deleting tail " << endl;
    deleteTail(head);
    printLL(head);

    cout << "After deleting middle " << endl;
    deleteMiddleNode(head);
    printLL(head);

    return 0;
}

// OUTPUT:
// 101 ->
// 102 -> 101 ->
// 103 -> 102 -> 101 ->
// 104 -> 103 -> 102 -> 101 ->        
// 105 -> 104 -> 103 -> 102 -> 101 -> 
// After deleting head
// 104 -> 103 -> 102 -> 101 ->        
// After deleting tail
// 104 -> 103 -> 102 ->
// After deleting middle
// 105 -> 103 -> 102 -> 101 ->