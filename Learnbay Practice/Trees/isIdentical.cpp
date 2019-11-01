/*
*****************************
Check if two given binary trees are identical or not.


*****************************
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

int isIdentical(struct node* root1, struct node* root2)
{
    int temp;
    if(!root1 && !root2)
        return 1;
    
    if(root1==NULL || root2==NULL)
        return 0;
    
    if(root1->data!=root2->data)
        return 0;

    temp=isIdentical(root1->left, root2->left);
    if(temp!=0)
    {
        temp=isIdentical(root1->right, root2->right);
    }

    return temp;
}


int main()
{
    struct node* root1, *root2;

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=1;
    root1=newNode;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=2;
    root1->left=newNode;
    
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=3;
    root1->right=newNode;

    root1->left->left=NULL;
    root1->left->right=NULL;

    
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=1;
    root2=newNode;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=2;
    root2->left=newNode;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=2;
    root2->right=newNode;

    root2->left->left=NULL;
    root2->left->right=NULL;


    cout<<isIdentical(root1, root2);
}

/* int main()
{
    struct node* root1, *root2;
    root1=NULL;
    root2=NULL;
    
    struct node* newNode=new node;
    newNode->data=1;
    root1=newNode;

    


    cout<<isIdentical(root1, root2);
}
 */


