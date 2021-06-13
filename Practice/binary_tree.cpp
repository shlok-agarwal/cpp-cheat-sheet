
#include <iostream>
using namespace std;

struct BNode
{
    int data;
    BNode *left, *right;
    BNode(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

void printTree(BNode *root)
{
    if(root == nullptr)
        return;
    
    cout << root->data <<"\t";
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    BNode *root = new BNode(1);
    BNode *left = new BNode(2);
    BNode *right = new BNode(3);
    BNode *l_left = new BNode(4);
    BNode *l_right = new BNode(5);
    BNode *r_left = new BNode(2);
    BNode *r_right = new BNode(4);
    
    root->left = left;
    root->right = right;
    left->left = l_left;
    left->right = l_right;
    right->left = r_left;
    right->right = r_right;

    printTree(root);

    return 0;
}