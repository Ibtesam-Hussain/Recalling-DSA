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


int main(int argc, char const *argv[])
{
    Node* node1 = new Node(101);
    cout << node1->data << " -> ";
    cout << node1->next;
    // cout << endl << NULL;
    return 0;
}
