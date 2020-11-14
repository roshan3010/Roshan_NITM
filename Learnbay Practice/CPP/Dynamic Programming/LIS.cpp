#include<bits/stdc++.h>
using namespace std;

int LIS(int B[], int n)
{
    
    int max=0;
    int lookup[n];
    int * lis=(int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++)
    {
        lis[i]=1;
    }
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i;j++)
        {
            if(B[i]>B[j] && lis[i]<lis[j]+1)
            {
                lis[i]=lis[j]+1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<lis[i]<<" ";
        if(max<lis[i])
            max=lis[i];
    }

    return max;
}

int main()
{
    int arr[]={3,4,2,5,1,8,7,10,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<LIS(arr, n);
}