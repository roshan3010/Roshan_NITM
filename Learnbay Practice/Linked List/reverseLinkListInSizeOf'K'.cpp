/*
***************************
Given a singly linked list reverse the link list in the size of K

***************************
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};


struct node* reverseListInSizeOfK(struct node* node, int k)
{
    int count=0;
    if(node==NULL)
    {
        cout<<"empty list 1";
        return node;
    }

    struct node* Prev=NULL;
    struct node* Curr=node;
    struct node* Next;

    while(Curr && count<k)
    {
        Next=Curr->next;
        Curr->next=Prev;
        Prev=Curr;
        if(count<k-1)
            Curr=Next;
        count++;
    }
    Curr->next=reverseListInSizeOfK(Next,k);
}

void printList(struct node* node)
{
	struct node* ptr=node;
	if(node==NULL)
    {
        cout<<"Empty list 2";
        return;
    }
		
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}


int main()
{
    int k=2;
    struct node* newNode;
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=1;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=2;
    head->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=3;
    head->next->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=4;
    head->next->next->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=5;
    head->next->next->next->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=6;
    head->next->next->next->next->next=newNode;
    head->next->next->next->next->next->next=NULL;

    printList(head);
    cout<<"\n";
    printList(reverseListInSizeOfK(head,k));
    

}