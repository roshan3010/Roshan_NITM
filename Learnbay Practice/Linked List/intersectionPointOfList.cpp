/*
*****************************
Find the intersection point of two linked lists.

i/p :        1->2->3->4->5
                          \
                           6->7->8->9->10
                          /
                11->12->13
o/p : 6

*****************************
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

int getCount(struct node* head);

int findIntersection(struct node* head1, struct node* head2)
{
    if(head1==NULL|| head2==NULL)
    {
        cout<<"Empty list";
        return -1;
    }
    int L1=getCount(head1);
    int L2=getCount(head2);

    if(L1>L2)
    {
        int n=L1-L2;
        while(n>0)
        {
            head1=head1->next;
            n--;
        }
            
    }
    else if(L2>L1)
    {
        int n=L1-L2;
        while(n>0)
        {
             head2=head2->next;
             n--;
        }   
    }
    
    while(head1->next != head2->next)
    {
        head1=head1->next;
        head2=head2->next;
    }

    return head1->next->data;

}

int getCount(struct node* head)
{
    int count=0;
    if(head==NULL)
    {
        cout<<"Empty list";
        return 0;
    }
    else
    {
        while(head!=NULL)
        {
            head=head->next;
            count++;
        }
    }
    return count;
}

void printList(struct node* node)
{
    if(node==NULL)
    {
        cout<<"empty list";
        return;
    }
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
    cout<<"\n";
}

int main()
{
    struct node* newNode;

    struct node* head1=(struct node*)malloc(sizeof(struct node));
    head1->data=1;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=2;
    head1->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=3;
    head1->next->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=4;
    head1->next->next->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=5;
    head1->next->next->next->next=newNode;

    struct node* head2=(struct node*)malloc(sizeof(struct node));
    head2->data=11;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=12;
    head2->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=13;
    head2->next->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=6;
    head1->next->next->next->next->next=newNode;
    head2->next->next->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=20;
    head2->next->next->next->next=newNode;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=25;
    head2->next->next->next->next->next=newNode;

    head2->next->next->next->next->next->next=NULL;
    printList(head1);
    printList(head2);


    cout<<"intersection point is : "<<findIntersection(head1,head2);

}