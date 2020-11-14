#include<bits/stdc++.h>
using namespace std;

int maxContiguousSum(int arr[],int n)
{
    int maxSum=0;
    int M[n];
    if(arr[0]>0)
        M[0]=arr[0];
    else
    {
            M[0]=0;
    }
    
    for(int i=1; i<n;i++)
    {
        if(M[i-1]+arr[i]>0)
            M[i]=M[i-1]+arr[i];
        else
            M[i]=0;
    }

    for(int i=0; i<n;i++)
    {
        if(maxSum<M[i])
            maxSum=M[i];
    }

    return maxSum;
}

int main()
{
    int arr[]={-2,11,-4,13,-5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum contiguous sum is : "<<maxContiguousSum(arr,n);
}

// T.C : O(n)
// S.C : O(1)