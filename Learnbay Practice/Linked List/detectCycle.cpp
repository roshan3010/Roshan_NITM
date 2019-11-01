/*
*****************************
Detect if there is a loop present in the list.

i/p :        1->2->3->4->5-> 6 -> 7
                         |        |
                        12        8
                         |        |
                        11 <-10 <-9
                          
o/p : 6

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

    while(fPtr!=NULL || fPtr->next!=NULL)
    {
        if(sPtr==fPtr)
        {
            return 1;
        }
        sPtr=sPtr->next;
        fPtr=fPtr->next->next;

    } 



    return 0;
}

int main()
{

}