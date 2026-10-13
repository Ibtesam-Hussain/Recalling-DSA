
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d) {
            this->data = d;
            this->left = this->right = NULL;
        }
};

Node* insertBST(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    // left right placement logic
    if (data < root->data) { // place left
        root->left = insertBST(root->left, data);
    }
    else { // place right
        root->right = insertBST(root->right, data);
    }

    return root;
}

Node* input(Node* &root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertBST(root, data);
        cin >> data;
    }

    return root;
}

bool searchBST(Node* root, int key) {
    if (root == NULL) {
        return false;
    }

    if (key == root->data) {
        return true;
    }

    if (key < root->data) {
        return searchBST(root->left, key);
    }
    else {
        return searchBST(root->right, key);
    }
}

int main() {
    Node* root = NULL;

    cout << "Enter data to build BST:" << endl;
    input(root);

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    bool found = searchBST(root, key);

    if (found) {
        cout << "Key present in BST" << endl;
    }
    else {
        cout << "Key is not present in BST" << endl;
    }

    return 0;
}


// Enter data to build BST:
// 50 30 70 20 40 60 80 -1
// Enter key to search: 40
// Key present in BST
