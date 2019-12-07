/*
*****************************
Mirror of a tree is another tree with left and right children of all leaf-nodes interchanged

Original Tree :
1
/ \
2 3
/ \ /
4 5 6


Mirror Tree:
1
/ \
3 2
\ / \
6 5 4

*****************************
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

//==================================================================================

struct node*  mirrorTree(struct node* root)
{
    struct node* temp;
    if(root)
    {
        mirrorTree(root->left);
        mirrorTree(root->right);

        temp=root->left;
        root->left=root->right;
        root->right=temp;
    }

    return root;
}

//==================================================================================

void inorderPrint(struct node* root)
{
    if(!root)
    {
        //cout<<"empty tree";
        return;
    }

    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
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
    newNode->data=10;
    root->right=newNode;
    root->right->right=NULL;
    root->right->left=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=3;
    root->left->left=newNode;
    root->left->left->right=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=7;
    root->left->right=newNode;
    root->left->right->left=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=8;
    root->left->right->right=newNode;
    root->left->right->right->left=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=9;
    root->left->right->right->right=newNode;
    root->left->right->right->right->left=NULL;
    root->left->right->right->right->right=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=4;
    root->left->left->left=newNode;
    
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=5;
    root->left->left->left->left=newNode;
    root->left->left->left->left->left=NULL;
    root->left->left->left->left->right=NULL;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=6;
    root->left->left->left->right=newNode;
    root->left->left->left->right->left=NULL;
    root->left->left->left->right->right=NULL;
	
	inorderPrint(root);
	cout<<endl;
    mirrorTree(root);
    inorderPrint(root);
}