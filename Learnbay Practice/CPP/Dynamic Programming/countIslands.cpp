/* 
******************************
given a 2-D matrix with 1's and 0's find the number of islands that are possible. an island is a group of consecutive 1's.

M[ROW][COL] = {{1,1,1,0,0,1},
               {1,1,0,0,0,0},
               {0,0,0,0,0,1},
               {1,0,0,0,0,1},
               {0,0,0,0,0,0}}

o/p : 4

******************************
*/

#include<bits/stdc++.h>
using namespace std;


int rowIndx[]={-1,-1,-1,0,0,1,1,1};
int colIndx[]={-1,0,1,-1,1,-1,0,1};

int M[][6]={{1,1,1,0,0,1},
               {1,1,0,0,0,0},
               {0,0,0,0,0,0},
               {1,0,0,0,0,0},
               {0,0,0,0,0,0}};
const int ROW=5;
const int COL=6;



bool isSafe(int M[ROW][COL], int row, int col, bool visited[][6] )
{
    return ((row>=0 && col>=0) && (M[row][col]==1 && !visited[row][col] && row<ROW && col<COL));
}


void lookup(int M[ROW][COL],int i,int j,bool visited[][6])
{
    visited[i][j]=true;
    for(int k=0; k<8;k++)
    {
        if(isSafe(M,i+rowIndx[k],j+colIndx[k],visited))
        {
            lookup(M,i+rowIndx[k],j+colIndx[k],visited);
        }
    }   
}


int countIslands(int M[ROW][COL])
{
    bool visited[ROW][COL];
    memset(visited,0,sizeof(visited));
    int count=0;
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL;j++)
        {
            if(M[i][j]==1 && !visited[i][j])
            {
                lookup(M,i,j,visited);
                ++count;
            }
        }
    }
    return count;
}


int main()
{
    cout<<countIslands(M);
}