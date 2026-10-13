
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

    // left and right placement logic
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

int minBST(Node* root) {
    if (root == NULL) {
        cout << "BST is empty" << endl;
        return -1;
    }

    while (root->left != NULL) {
        root = root->left;
    }

    return root->data;
}

int maxBST(Node* root) {
    if (root == NULL) {
        cout << "BST is empty" << endl;
        return -1;
    }

    while (root->right != NULL) {
        root = root->right;
    }

    return root->data;
}

int main() {
    Node* root = NULL;

    cout << "Enter data to build BST: ";
    input(root);

    cout << "Minimum value: " << minBST(root) << endl;
    cout << "Maximum value: " << maxBST(root) << endl;

    return 0;
}


// Enter data to build BST:  50 30 70 20 40 60 80 -1
// Minimum value: 20
// Maximum value: 80