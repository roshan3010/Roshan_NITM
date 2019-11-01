#include<bits/stdc++.h>
using namespace std;

int maxContiguousSum(int arr[],int n)
{
    int sum=0;
    int maxSum=0;
    for(int i=0; i<n;i++)
    {
        if(!(sum+arr[i]<0))
        {
            sum=sum+arr[i];
        }
        if(maxSum<sum)
            maxSum=sum;
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