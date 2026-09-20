// PostORDER TRAVERSAL L-R-N


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


void postorder(BTree* root){
    // base case 
    if (root == NULL){
        return;
    }

    // left-right-node
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";

}


int main(int argc, char const *argv[])
{
    BTree* root = NULL;

    // creation of tree (manually)
    root = buildTree(root);

    // print 
    postorder(root);

    return 0;
}

// INPUT: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// OUTPUT: 7 11 3 17 5 1