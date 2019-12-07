/*

Write a program to insert into a binary tree. 

*/

#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int _data)
{
    struct node* Node=new node();
    Node->data=_data;
    Node->left=NULL;
    Node->right=NULL;

    return Node;
}

void preOrder(struct node* node)
{
    if(!node)
        return;

    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);
}

void insertNodeInBT(struct node* root, int val)
{
    if(!root)
        root=newNode(val);
    
    if(root->left==NULL)
        root->left=newNode(val);

    if(root->right==NULL)
        root->right=newNode(val);
    
}

int main()
{
    struct node* root=newNode(3);
    root->left=newNode(2);
    root->right=newNode(4);
    root->left->left=newNode(1);
    preOrder(root);
    insertNodeInBT(root,5);
    cout<<endl;
    preOrder(root);

}