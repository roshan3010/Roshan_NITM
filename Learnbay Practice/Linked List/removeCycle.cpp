/*
*****************************
Find the starting point of the loop.

i/p :        1->2->3->4->5-> 6 -> 7
                         |        |
                        12        8
                         |        |
                        11 <-10 <-9
                          
o/p : 5

*****************************
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void detectCycle(struct node* node)
{
    struct node* sPtr=node;
    struct node* fPtr=node;
    if(node==NULL)
    {
        cout<<"empty list";
        return;
    }
    int flag=0;

    while(fPtr!=NULL || fPtr->next!=NULL)
    {
        if(sPtr==fPtr)
        {
            flag=1;
        }
        sPtr=sPtr->next;
        fPtr=fPtr->next->next;
    } 

    sPtr=node;
    if(flag)
    {
        while(sPtr!=fPtr)
        {
            sPtr=sPtr->next;
            fPtr=fPtr->next;
        }
        fPtr->next=NULL;
    }
    else
    {
        cout<<"Loop not present";
        return;
    }
}

int main()
{

}