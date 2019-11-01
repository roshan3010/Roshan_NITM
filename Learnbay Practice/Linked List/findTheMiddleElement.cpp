/*
*************************
Give a single linked list find the middle element of the list.

i/p : 1->2->3->4->4->5->6->7->8->9->10
o/p : 5

length : odd then one middle element        1 2 3 4 5       3 is the middle element
length : even then two middle oelement      1 2 3 4 5 6     3 & 4 both middle element ( 4 is middle element)


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
int findMiddleElement(struct node* node)
{
    if(node==NULL)
    {
        cout<<"Empty List";
        return -1;
    }
    struct node* ptr1=node;
    struct node* ptr2=node;
    while(ptr2!=NULL && ptr2->next!=NULL)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    return ptr1->data;
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
    cout<<findMiddleElement(head);
}
/*
------------------------------------------------------------
Driver function end
____________________________________________________________
*/

