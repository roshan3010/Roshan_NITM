/*  Given an array of integers having 1 to N-2 elements. find the two missing elements.

Input : {1,3,5,6}
Output: {2,4}
*/

#include<bits/stdc++.h>
using namespace std;


void find(int A[], int N)
{
	int n=4;
	cout<<"n = "<<n<<"\n";
    int x=A[0];
    for(int i=1; i<n; i++)
    {
        x=x^A[i];
        cout<<"x = "<<x<<"\n";
    }
    //cout<<"x = "<<x<<"\n";
    
    for(int i=1; i<=N; i++)
    {
        x=x^i;
        cout<<"2nd x = "<<x<<"\n";
    }
	//cout<<"x = "<<x<<"\n";
	
    int Sb=x&~(x-1);
    cout<<"SB = "<<Sb<<"\n";
    
    int g1=0, g2=0;

    for(int i=0; i<n; i++)
    {
        if(A[i]&Sb)
            g1=g1^A[i];
        else
            g2=g2^A[i];
    }
    
    cout<<"g1 = "<<g1<<"\n"<<"g2 = "<<g2<<"\n";

    for(int i=1; i<=N; i++)
    {
        if(A[i]&Sb)
            g1=g1^i;
        else
            g2=g2^i;
    }

    cout<<g1<<" "<<g2;
}

int main()
{
    int A[]={1,3,5,6};
    find(A,6);
}