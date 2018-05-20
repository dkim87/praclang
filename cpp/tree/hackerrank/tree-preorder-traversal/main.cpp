// tree-preorder-traversal
// https://www.hackerrank.com/challenges/tree-preorder-traversal/problem
#include <iostream>
using namespace std;

struct _node
{
    int data;
    _node *left;
    _node *right;
};

using node = struct _node;


void preOrder(node *root){
    if(root != nullptr){
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){
    // create a test case
    node n1 = {1, nullptr, nullptr};
    node n2 = {2, nullptr, nullptr};
    node n3 = {3, nullptr, nullptr};
    node n4 = {4, nullptr, nullptr};
    node n5 = {5, nullptr, nullptr};
    node n6 = {6, nullptr, nullptr};

    node *root = &n1;
    n1.right = &n2;
    n2.right = &n5;
    n5.left = &n3;
    n5.right = &n6;
    n3.right = &n4;

    preOrder(root);


    return 0;
}
