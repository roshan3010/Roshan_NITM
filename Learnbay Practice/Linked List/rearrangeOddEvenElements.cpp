/* Given a LL, rearrange the odd & even position elements together with odd first and then even.
      1   2   3   4   5   6      
I/P : 10->11->14->21->25->27
O/P : 10->14->25->11->21->27

cases : 
1) Empty linked list
2) Only one node
3) Only two nodes
4) Odd number of nodes
5) Even number of nodes

APP: 
p->next = (p->next!=null)? p->next->next : NULL
q->next = (q->next!=null)? q->next->mext: null

*/

#include<bits/stdc++.h>
using namespace std;


void rearrangeList(struct node* head)
{

}

void createList(struct node* head, int data)
{
    if(head==NULL)
}


int main()
{
    struct node* head=NULL;
    createList(*head, 10);
    createList(*head, 11);
    createList(*head, 14);
    createList(*head, 21);
    createList(*head, 25);
    createList(*head, 27);

}