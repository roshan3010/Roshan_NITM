#include<bits/stdc++.h>
using namespace std;


int LCS(string X, string Y)
{
    int nx=1+X.length();
    int ny=1+Y.length();
    int lookup[nx][ny];

    //cout<<nx<<" "<<ny<<"\n";

    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            if(i==0 || j==0)
            {
                lookup[i][j]=0;
            }
            else if(X[i-1]==Y[j-1])
            {
                lookup[i][j]=1+lookup[i-1][j-1];
            }
            else
            {
                lookup[i][j]=max(lookup[i][j-1],lookup[i-1][j]);
            }
        
        }
    }

    for(int i=0;i<nx;i++)
    {
        for(int j=0;j<ny;j++)
        {
            //cout<<lookup[i][j]<<" ";
            
            if(X[i]==Y[j])
            {
            	cout<<X[i];
            }
        }
        //
    }
    
    cout<<"\n";
    return lookup[nx-1][ny-1];
}


int main()
{
    string X="ABCDGH";
    string Y="AEBDFHR";

    cout<<"Longest common sequence is "<<LCS(X,Y);
}