/*******************************************************

Some problems appear hard though they are very easy. Today Aakash is stuck in a range query problem. He has been given an array with only numbers 0 and 1. There are two types of queries -

0 L R : Check whether the number formed from the array elements L to R is even or odd and print EVEN or ODD respectively. Number formation is the binary number from the bits status in the array L to R

1 X : Flip the Xth bit in the array 

Indexing is 1 based

Input
First line contains a number N and Q as input. Next line contains N space separated 0 or 1. Next Q lines contain description of each query 

Output
Output for only query type 0 L R whether the number in range L to R is "EVEN" or "ODD" (without quotes).

Constraints
1≤ N ≤ 10^6 
1≤ L ≤ R ≤ 10^6 
1≤ Q ≤ 10^6

1≤ X ≤ N

*******************************************************/

#include<bits/stdc++.h>
using namespace std;

void rangeQuery(int arr[], long Q)
{
    //cout<<"queries = "<<Q<<"\n";
    int flag;
    long long x,L,R;
    
    while(Q>0)
    {
        long long sum=0;
        cin>>flag;
        
        if(flag==1)
        {
            cin>>x;
            //cout<<"flag =  "<<flag<<"  x ="<<x<<"\n";
            if(arr[x-1]==0)
                arr[x-1]=1;
            else
                arr[x-1]=0;
        }
        
        else if(flag==0)
        {
            cin>>L>>R;
            /*cout<<L<<"  "<<R<<"\n";
            cout<<arr[R-1]<<"\n";*/
            if(arr[R-1]==1)
                cout<<"ODD\n";
            else
                cout<<"EVEN\n";
        }
        /*for(int i=0; i<5;i++)
        {
            cout<<arr[i]<<" ";
        }*/
        Q--;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long N,Q;
    cin>>N>>Q;
    int arr[N];
    for(long long i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    rangeQuery(arr,Q);
}