#include<bits/stdc++.h>
using namespace std;

void findSubinterval(int arr[],int N,int Q)
{
    int indx,value;
    int X=0, Y=0;
    int max=-1;
    int subinterval=0;
    while(Q>0)
    {
        //cout<<Q<<"\n";
        cin>>indx>>value;
        arr[indx]=value;
        for(int j=1; j<N; j++)
        {
            for(int i=0; i<=j; i++)
            {
                X=X^arr[i];
                
                if(max<X && X%2==0)
                {
                    //cout<<" "<<X<<"\n";
                    max=X;
                    subinterval=(j+1);
                    //cout<<i<<" "<<j<<"\n";
                    //cout<<" "<<subinterval<<"\n";
                }   
                
            }
        }
        cout<<" "<<subinterval;
        Q--;
    }
}


int main()
{
    int arr[1024];
    int T;
    int N,Q;
    int t=0;
    cin>>T;
    while(T>0)
    {
        cin>>N>>Q;
        for(int i=0; i<N; i++)
        {
            cin>>arr[i];
        }
        cout<<"Case #"<<t+1<<":";
        findSubinterval(arr,N,Q);
        cout<<"\n";
        T--;
    }
}