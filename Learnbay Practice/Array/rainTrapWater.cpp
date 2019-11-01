/*
******************************
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

   4|                                                                       ________        
    |                                                                       |       |     
    |                                                                       |       |  
    |                                                                       |       |
   3|                                       ________                        |       |
    |                                       |       |                       |       |    
    |                                       |       |                       |       |
    |                                       |       |                       |       |
   2|                ________               |       |               ________|       |
    |               |       |               |       |               |       |       |
    |               |       |               |       |               |       |       |
    |               |       |               |       |               |       |       |
   1|       ________|       |       ________|       |       ________|       |       |________   
    |       |       |       |       |       |       |       |       |       |       |       |
    |       |       |       |       |       |       |       |       |       |       |       |
    |       |       |       |       |       |       |       |       |       |       |       |
    |_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|
                1       2       0       1       3       0       1       2       4       1

i/p : A[]={1,2,0,1,3,0,1,2,4,1}
o/p : 9

******************************
*/

#include<bits/stdc++.h>
using namespace std;

int totalWater(int A[], int n)
{
    int Ln=-1;
    int Rn=-1;
    int sum=0;
    int temp[n];
    int i,j;
    //cout<<n<<" "<<Ln<<" "<<Rn<<"\n";
    for(i=0;i<n;i++)
    {
        temp[i]=max(Ln,A[i]);
        Ln=max(Ln,A[i]);
    }
    for(j=n-1; j>=0; j--)
    {
    	temp[j]=min(temp[j],max(A[j],Rn));
    	Rn=max(Rn,A[j]);
    }
    
    for(int i=0;i<n;i++)
    {
        sum += temp[i]-A[i];
    }

    return sum;
}

int main()
{
    int arr[]={4,2,0,5,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<totalWater(arr,n);
}



