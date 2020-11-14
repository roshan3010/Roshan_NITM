/*
********************************
Given n 2D matrix with cell values as cost of visiting that cell. Find the minimum cost path to reach till the farthest corner.

M[ROW][COL] = {{1,9,8},
               {7,2,6},
               {4,3,5}}

o/p : 8

******************************
*/

#include<bits/stdc++.h>
using namespace std;


int minCostPath(int M[][3], int ROW, int COL)
{
    int cost[ROW][COL];
    
    memset(cost,0,sizeof(cost));
    cost[0][0]=M[0][0];

    for(int i=1; i<ROW; i++)
    {
        cost[i][0]= cost[i-1][0]+M[i][0];
    }
                                                                        
    for(int j=1; j<ROW; j++)
    {
        cost[0][j] = cost[0][j-1]+M[0][j];
    }
    
    for(int i=1; i<ROW; i++)
    {
        for(int j=1; j<COL; j++)
        {       
            cost[i][j] = M[i][j] + min(cost[i-1][j-1], min(cost[i-1][j], cost[i][j-1]));
        }
    }
//----------------------------------------------------------- 
    
    int path[5];
    int k=0;
    int i=ROW-1;
    int j=COL-1;
    while(i>=0 && j>=0)
        {
            int ele = cost[i][j]-M[i][j];
            if(ele==cost[i-1][j])
            {
                path[k++]=M[i][j];
                i=i-1;
            }
            else if(ele==cost[i-1][j-1])
            {
                path[k++]=M[i][j];
                i=i-1;
                j=j-1;
            }
            else if(ele==cost[i][j-1])
            {
                path[k++]=M[i][j];
                j=j-1;
            }
        }
    
    for(int i=0;i<k;i++)
        cout<<path[i]<<" ";
        
        cout<<"\n";
    return cost[ROW-1][COL-1];
}


int main()
{
    int M[3][3] ={{1,9,8},
                  {7,2,6},
                  {4,3,5}};
    int ROW=3;
    int COL=3;
    cout<<minCostPath(M,ROW,COL);
}