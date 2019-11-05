/*This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?

*/

#include<bits/stdc++.h>
using namespace std;

bool findNumberSum(int A[],int k, int n)
{
    int i=0;
    int j=n-1;
    //sort(A);
    while(i<j)
    {
    	//cout<<A[i]+A[j]<<" ";
        if(A[i]+A[j]==k)
            return true;
        else if((A[i]+A[j])<k)  
            i++;    
        else
            j--;        
    }
    return false;
}


int main()
{
    int A[]={10, 15, 2, 8,6,5};
    int n=(sizeof(A)/sizeof(A[0]));
    int k;
    cin>>k;
	sort(A,A+n);
	/*for(int i=0; i<n; i++)
		cout<<A[i]<<" ";*/
    cout<<findNumberSum(A,k,n);
    return 0;
}