/*
***************************
code to find out the right most set bit of a number given in decimel number.
***************************
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rem=0;
    int num =14;
    int i=0;
    while(rem==0)
    {
        rem=num%2;
        num=num/2;
        i++;
    }

    cout<<i;
}