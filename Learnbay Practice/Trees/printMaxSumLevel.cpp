/*
*****************************
print level that has max sum

*****************************
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

/*
Algorithm:

1. Cal sum of each level
2. find maxSum level
3. print maxSum level

*/
void printGivenLevel(struct node* root, int level);

void maxSumLevel(struct node* root)
{
    struct node* temp;
    int maxSum=0;
    int sum=0;
    int level=0;
    int maxLevel=0;
    queue<struct node*> q;
    if(!root)
    	return;
    //cout<<"qwerty";
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
    	
        temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            if(sum>maxSum)
            {
                maxSum=sum;
                maxLevel=level;
                //cout<<maxLevel<<"\n";
                
            }

            sum=0;
            if(!q.empty())
                q.push(NULL);
            level++;
        }
        else
        {
            sum+=temp->data;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }

    printGivenLevel(root, maxLevel);
    
    //return maxLevel;
}

void printGivenLevel(struct node* root, int level)
{
     if (root == NULL) 
        return; 
    if (level == 1) 
        cout<< root->data<<" "; 
    else if (level > 1) 
    { 
        printGivenLevel(root->left, level-1); 
        printGivenLevel(root->right, level-1); 
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

    maxSumLevel(root);

}