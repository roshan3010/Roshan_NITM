/*
*****************************
Find the diameter of tree = internal stack memory utilization

*****************************
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

int treeHeight(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
    int leftHeight  = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);

    int maxHeight = max(leftHeight, rightHeight) + 1;

    return maxHeight;
}

int diameter(struct node* root)
{
	if(!root)
        return 0;
    
    int lh=treeHeight(root->left);
    int rh=treeHeight(root->right);

    int ld=diameter(root->left);
    int rd=diameter(root->right);

    return max(1+lh+rh, max(ld,rd));
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

    cout<<diameter(root);
}