/*
 Given a binary tree, find the size of the tree i.e. count the number of nodes.
 */

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

struct node* dollerNode()
{
    struct node* newNode=new node();
    newNode->data=0;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

void printLevel(struct node* root, int level)
{
    queue<struct node* > Q;
    Q.push(root);
    Q.push(dollerNode);
    struct node* temp;
    int i=1;
    while(!Q.empty(Q))
    {
        if(i>level)
            break;
        temp=Q.front();
        Q.pop();
        if(temp==dollerNode)
        {
            i++;
            Q.push(dollerNode);
        }

        if(i==level)
            cout<<temp->data<<" ";
        
        if(temp->left)
            Q.push(tmep->left);
        
        if(temp->right)
            Q.push(tmep->right);

        
    }
    delete(Q);
}

void levelOrderInReverse(struct node* root)
{
    int h=height(root);
    for(int i=h; i>0; i--)
    {
        printLevel(root, i);
        cout<<"\n";
    }
}





//####################################################
//Driver function
//####################################################
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

    //cout<<findMaxEle(root);
    //cout<<"\n"<<findMaxWithoutRecurr(root);
    cout<<printLevel(root, 2);
}


