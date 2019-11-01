/*
This function converts a given binary to corresponding decimal value.
 */

#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int A[], int n)
{
    int k=0;
    int decValue=0;

    for(int i=n-1; i>=0; i--)
    {
        decValue = decValue + A[i]*pow(2,k++);
        //cout<<decValue<<endl;
    }
    
    return decValue;
}

int main()
{
    int A[] = {1,0,1,1,0};
    int n=5;
    cout<<binaryToDecimal(A,n);
}