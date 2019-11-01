/*
*****************************
perform a inorder traversal in binary tree

*****************************
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};
struct node* prev_node=NULL;

void bstToDll(struct node* root, struct node **head)
{
    if(!root)
        return;
    
    bstToDll(root->left, head);

    if(prev_node==NULL)
    {
        *head=root;
        root->left=prev_node;
    }
    else
    {
        root->left=prev_node;
        prev_node->right=root;
    }

    prev_node=root;
    bstToDll(root->right, head);
}

void print(struct node* root)
{
    if(!root)
        cout<<"Empty List \n";
    
    while(root)
    {
        cout<<root->data<<" ";
        root=root->right;
    }
    cout<<"\n";
    
     while(prev_node)
    {
        cout<<prev_node->data<<" ";
        prev_node=prev_node->left;
    }
	
   
}

int main()
{
    struct node* root, *head;
    head=NULL;
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=6;
    root=newNode;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=4;
    root->left=newNode;
    
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=8;
    root->right=newNode;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=2;
    root->left->left=newNode;

	newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=5;
    root->left->right=newNode;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=3;
    root->left->left->right=newNode;

	newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=1;
    root->left->left->left=newNode;
    
    root->left->left->left->left=NULL;
    root->left->left->left->right=NULL;
    
    root->left->left->right->left=NULL;
    root->left->left->right->right=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=7;
    root->right->left=newNode;

	root->left->right->left=NULL;
    root->left->right->right=NULL;

    root->right->left->left=NULL;
    root->right->left->right=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=9;
    root->right->right=newNode;

    root->right->right->left=NULL;
    root->right->right->right=NULL;


    bstToDll(root, &head);

    print(head);
}