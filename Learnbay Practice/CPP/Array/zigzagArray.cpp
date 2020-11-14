/*
****************************
Given an array, arrange the elements of the array in zigzag fashion.

i/p : 4 3 7 8 6 2 1
o/p : 3 7 4 8 2 6 1 
****************************
*/


#include<bits/stdc++.h>
using namespace std;

void zigzagArray(int arr[],int N)
{
    for(int i=0; i<N-1; i++)
    {
        if(i%2==0)
        {
            if(arr[i+1]<arr[i])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        else 
        {
            if(arr[i+1]>arr[i])
            {
                swap(arr[i],arr[i+1]);
            }

        }
    }

    for(int i=0; i<N; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={4,3,7,8,6,2,1};
    int N=sizeof(arr)/sizeof(arr[0]);
    zigzagArray(arr,N);
    
}