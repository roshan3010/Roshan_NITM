/*
*****************************
Find the height of tree = internal stack memory utilization
without using recursion

*****************************
*/

int heightTree(struct node* root)
{
    struct queue* Q=createQueue();
    int level=0;
    if(!root) return 0;
    enqueue(Q, root);
    enqueue(Q,NULL);
    while(!isEmptyQueue())
    {
        root=dequeue(Q);
        if(root==NULL)
        {
            if(!isEmptyQueue(Q))
            {
                enqueue(Q,NULL);
            }
            level++;
        }
        else
        {
            if(root->left)
                enqueue(Q,root->left);
            if(root->right)
                enqueue(Q,root-right);
        }
        
    }
    return level;
}