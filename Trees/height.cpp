#include <iostream>
#include <algorithm> // For std::max

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Logic to calculate the height recursively
int calculateHeight(Node* root) {
    // Base Case: If the tree is empty, height is 0
    if (root == nullptr) {
        return 0;
    }
    
    // Recursive Calls: Get the height of left and right subtrees
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);
    
    // Result is the max depth of subtrees plus the current node
    return std::max(leftHeight, rightHeight) + 1;
}
