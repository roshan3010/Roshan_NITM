/*

Write code to delete binary tree. delete all nodes from bottom to top.

*/

#include<bits10_1.h/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};


void root2Leaf(struct node* root, int path[], int len)
{
    if(!root)
        return;
    
    path[len]=root->data;
    len++;
    if(root->left==NULL and root->right==NULL )
    {
         printPath(path,len);
         cout<<"\n";
    }   
    else{
        root2Leaf(root->left, path, len);
        root2Leaf(root->right, path, len);
    }
    
}

void printPath(int arr[], int len)
{
    for(int i=0; i<len; i++)
        cout<<arr[i]<<" ";
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
    
    int path[INT_MAX];
    root2Leaf(root, path, 0);

    return 0;
}