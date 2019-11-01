#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
    	int data;
    	Node* next;
};

Node* reverseListInPairs(Node* head)
{
    Node* temp;

    if(head==NULL || head->next==NULL)
    {
        cout<<"Empty List";
        return NULL;
    }

    else{
        temp=head->next;
        head->next=temp->next;
        temp->next=head;
        head=temp;

        head->next->next=reverseListInPairs(head->next->next);
        return head;
    }
}




void push(Node** head, int new_data)
{
    Node* newNode= new Node();
    newNode->data=new_data;
    newNode->next=*head;
    *head=newNode;
}

void print(Node* head)
{
    if(!head)
    {
        cout<<"Empty list \n";
        return;
    }
    while(head!=NULL)
    {
    	
        cout<<head->data;
        head=head->next;
		if(head!=NULL)	cout<<"-> ";
    } 
    cout<<"\n";
}

int main()
{
    Node* head=NULL;
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    print(head);
    print(reverseListInPairs(head));
}   