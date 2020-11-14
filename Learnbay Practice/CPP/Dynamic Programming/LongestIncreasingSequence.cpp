#include<bits/stdc++.h>
using namespace std;

void sort(int A[], int B[])
{
    int i,temp,j,temp1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                temp1=B[j];
                B[j]=B[j+1];
                B[j+1]=temp1;
            }
        }
    }
    cout<<"\nData after sorting: ";
    for(j=0;j<4;j++)
    {
        cout<<A[j];
    }
    cout<<"\n";
    for(j=0;j<4;j++)
    {
        cout<<B[j];
    }
}

int LIS(int B[])
{
    int n=sizeof(B)/sizeof(B[0]);
    int max=0;
    int lookup[n];
    for(int i=0; i<n; i++)
    {
        lookup[i]=1;
    }
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i;j++)
        {
            if(B[i]>B[j] && lookup[i]<lookup[j]+1)
            {
                lookup[i]=lookup[j]+1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(max<lookup[i])
            max=lookup[i];
    }

    return max;
}

 int main()
 {
    int i,temp,j,temp1;
    int B[]={2,1,4,3};
    int A[]={2,3,1,4};
    
    cout<<"\nData before sorting: ";
    for(j=0;j<4;j++)
    {
        cout<<A[j];
    }
    sort(A, B);
    cout<<LIS(B);
 }