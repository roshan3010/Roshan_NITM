/* check if a given number is power of 2 or not */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=32;
    int i=0;
    int flag=0;
    while (n>=pow(2,i))
    {
    	cout<<pow(2,i)<<"\n";
        if(n==pow(2,i))
            flag=1;
        i++;
    }
    
    if(flag==1)
        cout<<"True";
    else
    {
            cout<<"false";
    }
    
}