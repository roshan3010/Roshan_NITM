/*
This problem was asked by Uber.

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?
*/

#include<bits/stdc++.h>
using namespace std;

int findProduct(int Arr[],int n, int indx)
{
    int product=1;
    for(int k=0; k<n;k++)
    {
        if(k!=indx)
            product=product*Arr[k];
    }
    return product;
}

void replaceElement(int Arr[],int n)
{
    int tempArr[n]={0};
    for(int i=0; i<n; i++)
    {
        tempArr[i]=findProduct(Arr,n,i);
    }

    for(int i=0; i<n;i++)
        cout<<tempArr[i]<<" ";
}

int main()
{
    int Arr[]={1,2,3,4,5};
    int n=sizeof(Arr)/sizeof(Arr[0]);
    replaceElement(Arr,n);
    return 0;
}


// T.C : O(N^2) S.C : O(N)
// optimization
void replaceElement(int Arr[], int n)
{
    int product=1;
    for(int i=0; i<n; i++)
        product=product*Arr[i];
    
    for(int i=0; i<n; i++)
        Arr[i]=product/Arr[i];
    
    for(int i=0; i<n; i++)
        cout<<Arr[i]<<" ";
}

// T.C : O(N) S.C : O(1)