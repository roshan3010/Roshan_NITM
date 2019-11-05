#include<bits/stdc++.h>
using namespace std;

long long count(long long a,long long b)
{
	return pow(a,b);
}

int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<count(a,b)<<"\n";
    return 0;
}