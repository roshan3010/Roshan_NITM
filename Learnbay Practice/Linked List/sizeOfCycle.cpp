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

int detectCycle(struct node* node)
{
    struct node* sPtr=node;
    struct node* fPtr=node;
    if(node==NULL)
    {
        cout<<"empty list";
        return -1;
    }
    int flag=0;
    int count1=0;
    //int count2=0;

    while(fPtr!=NULL || fPtr->next!=NULL)
    {
        if(sPtr==fPtr)
        {
            flag=1;
        }
        sPtr=sPtr->next;
        fPtr=fPtr->next->next;
        count1++;
    } 

    if(flag)
    {
        return (count1-1);
    }

    else
    {
        cout<<"Loop not present";
        return -1;
    }
    
}

int main()
{

}