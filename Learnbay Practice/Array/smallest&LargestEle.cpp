#include<bits/stdc++.h>
using namespace std;


void SmallestAndLargestEle(int arr[], int n)
{
    int smallest=INT_MAX;
    int largest=-1;
    for(int i=0; i<n; i++)
    {
        if(smallest>arr[i])
            smallest=arr[i];
        if(largest<arr[i])
            largest=arr[i];
    }

    cout<<smallest<<","<<largest;
}

int main()
{
    int arr[]={2,4,1,5,8,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    SmallestAndLargestEle(arr, n);
}

//###########################################################################
// Stock Buy&Sell Problem
//###########################################################################
#include<bits/stdc++.h>
using namespace std;


void SmallestAndLargestEle(int arr[], int n)
{
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int maxDiff=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(smallest>arr[i])
        {
            if(maxDiff < (largest-smallest))
               {
                    smallest=arr[i];
                    maxDiff=(largest-smallest);
                    cout<<maxDiff<<"\n";
               } 
        }
            
        if(largest<arr[i])
        {
            if(maxDiff < (largest-smallest))
                {
                    largest=arr[i];
                    maxDiff=(largest-smallest);
                    cout<<maxDiff<<"\n";
                }
                
        }
    }

    cout<<smallest<<","<<largest;
}

int main()
{
    int arr[]={2,4,11,5,8,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    SmallestAndLargestEle(arr, n);
}