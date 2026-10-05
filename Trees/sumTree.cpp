#include <iostream>
using namespace std;

class Tree {
public:
    Tree* left;
    int data;
    Tree* right;

    // Constructor
    Tree(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to build the tree recursively using pre-order input
Tree* buildTree(Tree* root) {
    cout << "Enter data (negative value for NULL): " << endl;
    int data;
    cin >> data;

    // If input data < 0, it means it's NULL
    if (data < 0) {
        return NULL;
    }

    root = new Tree(data);

    cout << "Enter left child for " << data << ":" << endl;
    root->left = buildTree(root->left);

    cout << "Enter right child for " << data << ":" << endl;
    root->right = buildTree(root->right);

    return root;
}

// Function to find the sum of all nodes in the tree
int sumSubtree(Tree* root) {
    if (root == NULL) {
        return 0;
    }
    return root->data + sumSubtree(root->left) + sumSubtree(root->right);
}

int main() {
    Tree* root = NULL;
    
    // Creation of tree
    root = buildTree(root);
    
    cout << "Sum of the subtree is: " << sumSubtree(root) << endl;

    return 0;
}
