//BST implementation
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node (int d){
            this->data = d;
            this->left = this->right = NULL;
        }
};

Node* insertBST(Node* root, int data){
    if (root == NULL){
        root = new Node(data);
        return root;
    }

    // left right placement logic
    if(data < root->data) { //place left
        root->right = insertBST(root->right, data);
    }
    else{//place right
        root->left = insertBST(root->left, data);
    }
}

Node* input(Node* &root){
    int data;
    cin >> data;

    while(data != -1) { //if -1 means NULL
        root = insertBST(root, data);
        cin >> data;
    }
}

//print in lvl order for display
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }

        if (temp->right) {
            q.push(temp->right);
        }
    }
    
}


int main() {
    Node* root = NULL;

    cout << "Enter data to create BST : ";
    input(root);

    cout << endl << "Level Order Traversal : ";
    levelOrderTraversal(root);
}

// Enter data to create BST : 50 30 70 20 40 60 80 -1

// Level Order Traversal : 50 70 30 80 60 40 20 