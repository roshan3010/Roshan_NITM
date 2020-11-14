#include<bits/stdc++.h>

using namespace std;

#define ll long long

long long count_1(long long X)
{
    long long count =0;
    
    while(X != 0)
    {
        count++;
        X = X & X-1;
    }
    
    return count;
}

int main(){
    
    ll T,N,Q,P,V,count,max,X,z=1;
    cin>>T;
    
    while(T--)
    {
        cin>>N>>Q;
        
        ll A[N];
        
        for(ll i=0; i<N; i++)
            cin>>A[i];
        
        cout<<"Case #"<<z<<":";
        for(ll i=1; i<=Q; i++)
        {
            cin>>P>>V;
            A[P] = V;
            max =0;
            for(ll j=0; j<N; j++)
            {
                X = A[j];
                for(ll k=j+1; k<N; k++)
                {
                   X = X ^ A[k];
                   if(count_1(X)%2 == 0)
                   {
                       if(max < (k-j+1))
                           max = (k-j+1);
                   }
                }
            }
            cout<<" "<<max;
        }
        cout<<"\n";
        z++;
    }
    
    
    return 0;
}