#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* createNode(int data)
{
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;

	return newNode;
}

int maxHeight(struct node* node)
{
	if(node==NULL)
	{
		return 0;
	}
	else
	{
		int lHeight = maxHeight(node->left);
		int rHeight = maxHeight(node->right);

		return (lHeight>rHeight ? lHeight+1 : rHeight+1);
	}
}

int main()
{
	struct node* root=createNode(1)	;
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	root->left->left->left=createNode(5);
	root->left->left->left->left=createNode(6);
	root->right->right=createNode(7);

	cout<<"max height of the tree is : "<<maxHeight(root);
}