/*
Given two numbers represented as linked lists. add the numbers and return the result in an array only.

*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
    	int data;
    	Node* next;
};

void push(Node** head, int new_data)
{
    Node* newNode= new Node();
    newNode->data=new_data;
    newNode->next=*head;
    *head=newNode;
}

Node* reverseList(Node* node)
{
    Node* prev, *curr, *next1;
    prev=NULL;
    curr=node;
    next1=NULL;

    if(node==NULL)
    {
        cout<<"Empty list";
        return node;
    }

    while(curr!=NULL)
    {
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
    
    return curr;
}

int length(Node* head)
{
    int count=0;
    if(!head)
    {
        cout<<"Empty list"<<endl;
    }
    else
    {
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
    }
    return count;
    
}

Node* listSum(Node* head1, Node* head2)
{
    Node* temp1=reverseList(head1);
    Node* temp2=reverseList(head2);

    Node* head3=NULL;
    int sum=0;
    int carry=0;
    int L1=length(head1);
    int L2=length(head2);

    Node* ptr=NULL;
    if(L1>L2)
        ptr=head1;
    else
    {
        ptr=head2;
    }

    while(ptr!=NULL)
    {
        sum = (temp1->data) + (temp2->data) + carry;
        carry=sum%10;
        push(&head3,int(sum/10));
        temp1=temp1->next;
        temp2=temp2->next;
        ptr=ptr->next;
    }
    if(L1>L2)
    {   
        temp1=temp1->next;
        push(&head3, temp1->data+carry);
        while(temp1!=NULL)
        {
            push(&head3, temp1->data);
            temp1=temp1->next;
        }
    }
    else
    {
        temp2=temp2->next;
        push(&head3, temp2->data+carry);
        while(temp2!=NULL)
        {
            push(&head3, temp2->data);
            temp2=temp2->next;
        }
    }
    

    return head3;

}



void printList(Node* node)
{
    if(node==NULL)
        cout<<"Empty List";
    else
    {
        
        while(node!=NULL)
        {
            cout<<node->data<<" ";
            node=node->next;
        }        
    }
    
}

int main()
{
    Node* head1=NULL;
    Node* head2=NULL;
    push(&head2, 9);
    push(&head2, 1);
    push(&head2, 1);
    push(&head1, 4);
    push(&head1, 3);
    push(&head1, 2);
    push(&head1, 1);
    printList(head1);
    cout<<"\n";
    printList(head2);
    
    //Node* newHead=listSum(head1,head2);
    printList(newHead);
    
}