/*
*******************************
Given a set of non-negative integers, and a value sum,
determine if there is a subset of the given set with sum equal to given sum.

Examples: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output:  True  //There is a subset (4, 5) with sum 9.

********************************
*/

#include<bits/stdc++.h>
using namespace std;

bool subsetSum(int M[], int k, int n)
{
    bool L[n+1][k+1];
    
    for(int i=0; i<=n;i++)
    {
        for(int j=0; j<=k; j++)
        {
            if(j==0)
            {
                L[i][j]=true;
            }
            else if(i==0 && j>0)
            {
                L[i][j]=false;
            }
            else  if(M[i-1]>j)
            {
            	L[i][j]=L[i-1][j];
            }
            else
            {
                L[i][j]= L[i-1][j-M[i-1]] || L[i-1][j];
            }
        }
    }
    
    /* for(int i=0; i<=n;i++)
    {
        for(int j=0; j<=k; j++)
        {
        	cout<<L[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n"; */
    
    return L[n][k];
}

int main()
{
    int M[]={1,3,4,5};
    int n=4;
    int k=6;
    cout<<subsetSum(M,k,n);
}