/* 
Naive method to search for a string in a text.
*/


#include<bits/stdc++.h>
using namespace std;

void naiveSearch(char* txt, char* pat)
{
    int n=strlen(txt);
    int m=strlen(pat);
    
    if(n<m)
    	return;
    
    
    for(int i=0; i<=n-m; i++)
    {
        int j;
        for(j=0; j<m; j++)
            if(txt[i+j]!=pat[j])
                break;
    

        if(j==m)
        {
            cout<<"pattern found at "<<i<<endl;
        }
    }
    
}

int main()
{
    char txt[]="HONESTYISBESTPOLICY";
    char pat[]="POL";
    naiveSearch(txt, pat);
}

