/*
****************************
Given a singly linked list, find the Kth element from last.
i/p : 1->2->3->4->5->6->7->8->9->10     K=3
o/p : 8
****************************
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

/*
------------------------------------------------------------
This function can be changed
____________________________________________________________
*/
int KthElement(struct node* node, int k)
{
    if(node==NULL)
    {
        cout<<"Empty List";
        return -1;
    }
    struct node* temp1;
    struct node* temp2;
    temp1=node;
    temp2=node;
    int i=k;
    while(i>0 & temp2 != NULL)      // k>n
    {
        temp2=temp2->next;
        i--;
    }
    if(temp2==NULL)                 // k=n
        return -1;

    while(temp2!=NULL)
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return temp1->data;
}

/*
------------------------------------------------------------
main function ends
____________________________________________________________
*/

/*
------------------------------------------------------------
Create list
____________________________________________________________
*/
void createList(struct node** head, int data)
{
   struct node* newNode = (struct node*) malloc(sizeof(struct node)); 
   struct node* last = *head;
   newNode->data = data;
   newNode->next=NULL;
   if(*head==NULL)
   {
   	*head=newNode;
   	return;
   }
   while(last->next!=NULL)
   {
   	last=last->next;
   }
   last->next=newNode;
   return;
    
}
/*
------------------------------------------------------------
Create list function end
____________________________________________________________
*/

/*
------------------------------------------------------------
Print list
____________________________________________________________
*/
void printList(struct node* node)
{
	struct node* ptr=node;
	if(node==NULL)
		cout<<"Empty list";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}
/*
------------------------------------------------------------
Print list function end
____________________________________________________________
*/


/*
------------------------------------------------------------
Driver function
____________________________________________________________
*/
int main()
{
    struct node* head=NULL;
    createList(&head,1);
    createList(&head,2);
    createList(&head,3);
    createList(&head,4);
    createList(&head,5);
    createList(&head,6);
    //printList(head);
    cout<<KthElement(head,3);
}
/*
------------------------------------------------------------
Driver function end
____________________________________________________________
*/

