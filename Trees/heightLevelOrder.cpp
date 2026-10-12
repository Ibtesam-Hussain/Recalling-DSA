#include <iostream>
#include <queue>

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Logic to calculate the height iteratively
int calculateHeightIterative(Node* root) {
    if (root == nullptr) return 0;

    std::queue<Node*> q;
    q.push(root);
    int height = 0;

    while (!q.empty()) {
        int levelSize = q.size(); // Number of nodes at the current level
        
        // Process all nodes at the current level
        for (int i = 0; i < levelSize; ++i) {
            Node* current = q.front();
            q.pop();

            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        // Increment height after completing the level
        height++;
    }

    return height;
}
