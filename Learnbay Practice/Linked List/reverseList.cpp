/*
*************************
Give a single linked list reverse the list.

i/p : 1->2->3->4->5->6
o/p : 1<-2<-3<-4<-5<-6



Another version :
Find the element which divides the list in 1/3rd.

*************************
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
struct node* reverseList(struct node* node)
{
    struct node* prev, *curr, *next;
    prev=NULL;
    curr=node;
    next=NULL;

    if(node==NULL)
    {
        cout<<"Empty list";
        return node;
    }

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    
    return curr;
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
    printList(head);
    cout<<"\n";
    printList(reverseList(head));
}
/*
------------------------------------------------------------
Driver function end
____________________________________________________________
*/

