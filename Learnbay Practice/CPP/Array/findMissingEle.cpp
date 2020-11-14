/*
Given an array fo n-1 elements having one missing element and every element is in the range [1,n], find the missing element.
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X=0,Y=0;
    int a[]={2,1,3,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
    {
        X=X^a[i];
        //cout<<X<<"\n";
    }
    //cout<<"=============\n";
    for(int i=1; i<=n+1; i++)
    {
        Y=Y^i;
       // cout<<Y<<"\n";
    }
    
    int Z=X^Y;
    cout<<Z;
}  