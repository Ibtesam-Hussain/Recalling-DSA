// INORDER TRAVERSAL L-N-R


#include <iostream>
#include <queue>
using namespace std;

class BTree {
    public:
    int data;
    BTree* left;
    BTree* right;

    // default constructor
    BTree(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

BTree* buildTree(BTree* root){
    cout << "Enter data : " << endl;
    int data;
    cin >> data;
    root = new BTree(data);

    // if input data < 0, means its NULL
    if (data < 0) {
        return NULL;
    }

    //left and right creation
    cout << "Enter left : " << endl;
    root->left = buildTree(root->left);
    cout << "Enter Right : " << endl;
    root->right = buildTree(root->right);
    
    return root;
}


void inorder(BTree* root){
    // base case 
    if (root == NULL){
        return;
    }

    // left-node-right 
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


int main(int argc, char const *argv[])
{
    BTree* root = NULL;

    // creation of tree (manually)
    root = buildTree(root);

    // print 
    inorder(root);

    return 0;
}

// INPUT: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// OUTPUT: 7 3 11 1 17 5  