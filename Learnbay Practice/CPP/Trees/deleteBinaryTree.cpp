/*

Write code to delete binary tree. delete all nodes from bottom to top.

*/

#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};


void deleteBtree(struct node* root)
{
    if(root==NULL)
        return;
    
    deleteBtree(root->left);
    deleteBtree(root->right);

    free(root);
}

void printBtree(struct node* root)
{
    if(root==NULL)
        return;
    else{
	    printBtree(root->left);
	    cout<<root->data<<" ";
	    printBtree(root->right);
    }
}


int main()
{
    struct node* root;
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=1;
    
    root=newNode;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=2;
    root->left=newNode;
    
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=3;
    root->right=newNode;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=6;
    root->left->left=newNode;

    root->left->right=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=7;
    root->left->left->right=newNode;

    root->left->left->left=NULL;
    root->left->left->right->left=NULL;
    root->left->left->right->right=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=4;
    root->right->left=newNode;

    root->right->left->left=NULL;
    root->right->left->right=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=5;
    root->right->right=newNode;

    root->right->right->left=NULL;
    root->right->right->right=NULL;
    cout<<"before deletion : ";
    printBtree(root);
    deleteBtree(root);
    cout<<"\nafter deletion : ";
    printBtree(root);

    return 0;
}