#include <bits/stdc++.h>
using namespace std;

class Tree {
public:
    int data;
    Tree* left;
    Tree* right;

    // Parameterized constructor
    Tree(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Tree* buildTree(Tree* root) {
    cout << "Enter data: " << endl;
    int data;
    cin >> data;
    
    // If input data < 0, means it's NULL
    if (data < 0) {
        return NULL;
    }
    
    root = new Tree(data);

    // Left and right creation
    cout << "Enter left for " << data << endl;
    root->left = buildTree(root->left);
    
    cout << "Enter right for " << data << endl;
    root->right = buildTree(root->right);
    
    return root;
}

void countLeaf(Tree* root, int &count) {
    // Check if root is NULL
    if (root == NULL) {
        return;
    }
    
    // Check if it is a leaf node (both left and right children are NULL)
    if (root->left == NULL && root->right == NULL) {
        count++;
    }
    
    // Traverse left and right subtrees
    countLeaf(root->left, count);
    countLeaf(root->right, count);
}

int numOfLeafNode(Tree* root) {
    int count = 0;
    countLeaf(root, count);
    return count;
}

int main() {
    Tree* root = NULL;
    // Creation of tree (manually via input)
    root = buildTree(root);
    
    cout << "Number of leaf nodes are: " << numOfLeafNode(root) << endl;
    return 0;
}
