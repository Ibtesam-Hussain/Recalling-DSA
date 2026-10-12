//check if the trees are identical or not

#include <iostream> 
using namespace std;

class Tree {

    public:
    int data;
    Tree* left;
    Tree* right;

    Tree (int d){
        this->data = d;
        this->left = this->right = NULL;
    }

};

bool isIdentical (Tree* p, Tree* q){

    //if both return nodes points to null then its same 
    if (p == NULL && q == NULL) {
        return true;

    }

    //if any of the nodes points to another node
    if (p == NULL || q == NULL) {
        return false;
    }



    //if value mismatch then also not identical
    if (p->data != q->data) {
        return false;
    }


    //recursive call to do for each node

    return isIdentical(p->left, q->left) && isIdentical(p->right, q->right);
        

}



//remaining main function and build tree func 