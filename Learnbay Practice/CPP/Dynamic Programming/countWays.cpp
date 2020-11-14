#include<bits/stdc++.h>
using namespace std;


int countWays(int n)
{
    int f[n];
    f[0]=1;
    f[1]=1;

    f[n]=f[n-1]+f[n-2];

    return f[n];
}

int main()
{

    int n=3;
    cout<<countWays(n);
}