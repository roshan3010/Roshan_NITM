#include<bits/stdc++.h>
using namespace std;

int minJump(int arr[], int n)
{
    int jump[n];
    memset(jump,INT_MAX,sizeof(jump));
    
    //cout<<minJump;
    jump[0]=0;
    for(int i=1; i<n; i++)
    {
    	int minJump=INT_MAX;
        for(int j=0;j<i;j++)
            {
                if(j+arr[j]>=i)
                {
                    if(minJump>jump[j])
                     {
                        jump[i]=jump[j]+1;
                        minJump=jump[i];
                     }
                }
            }
     }
     for(int i=0; i<n; i++)
    	cout<<jump[i]<<" ";
    cout<<"\n";
     return jump[n-1];
 }

 int main()
 {
     int arr[]={1,3,5,8,9,2,6,7,6,8,9};
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<minJump(arr,n);
 }