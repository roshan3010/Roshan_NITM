#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next;
};

void printList(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    node* first= NULL;
    node* second=NULL;
    node* third= NULL;
    first=new node();
    second=new node();
    third=new node();
    first->data=2;
    first->next=second;
    second->data=4;
    second->next=third;
    third->data=6;
    third->next=NULL;
    printList(first);
}