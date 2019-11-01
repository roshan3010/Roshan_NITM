#include<bits/stdc++.h>
using namespace std;


void reverseString(char arr[], int n)
{
    for(int i=0; i<=n/2; i++)
    {
        char temp=arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=temp;
        //cout<<arr[i]<<" ";
    }
    for(int i=0; i<=n; i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    char arr[]="learnbay";
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseString(arr, n-1);
}