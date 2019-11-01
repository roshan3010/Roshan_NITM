/*
*****************************
Given a binary tree, find maximum element.


*****************************
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

int findMaxEle(struct node* node)
{
    if(!node)
    {
        //cout<<"empty tree";
        return -1;
    }

    int leftMax=findMaxEle(node->left);
    int rightMax=findMaxEle(node->right);

    return max(node->data,max(leftMax, rightMax));
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

    cout<<findMaxEle(root);
}


