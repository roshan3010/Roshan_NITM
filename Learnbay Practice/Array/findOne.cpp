#include<bits/stdc++.h>
using namespace std;

int findOne(int A[], int n)
{
    int result=0;
    for(int i=0; i<n; i++)
    {
        result=result^A[i];
        //cout<<result<<"\n";
    }

    return result;
}

int main()
{
    int A[]={1,3,4,2,3,4,1,2,10,11,10};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<findOne(A,n);
}