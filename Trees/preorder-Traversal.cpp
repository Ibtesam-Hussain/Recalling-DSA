// PREORDER TRAVERSAL N-L-R


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


void preorder(BTree* root){
    // base case 
    if (root == NULL){
        return;
    }

    // node-left-right 
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


int main(int argc, char const *argv[])
{
    BTree* root = NULL;

    // creation of tree (manually)
    root = buildTree(root);

    // print 
    preorder(root);

    return 0;
}

// INPUT: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// OUTPUT: 1 3 7 11 5 17 