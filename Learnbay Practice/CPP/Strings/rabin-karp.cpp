/* 
    Rabin-Karp Algorithm for Pattern Searching
    Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[]) 
    that prints all occurrences of pat[] in txt[]. You may assume that n > m
*/


#include<bits/stdc++.h>
using namespace std;

void rabin_karp(char* txt, char* pat)
{
    int n=strlen(txt);
    int m=strlen(pat);
    
    if(n<m)
    	return;
    
     int hp=0;
     int ht=0;
     for(int i=0; i<m; i++)
        hp+=int(pat[i])*pow(10,m-1-i);
	
	//cout<<"hp= "<<hp<<endl;
	
    for(int i=0; i<m; i++)
        ht+=int(txt[i])*pow(10,m-1-i);

	//cout<<"ht= "<<ht<<endl;
	
    for(int i=m; i<n; i++)
    {
        
		//cout<<"ht= "<<ht<<endl;
        if(ht==hp)
        {
        	//cout<<"pattern match ht= "<<ht<<endl;
            for(int k=0; k<m; k++)
            	if(pat[k]!=txt[i+k-m])
                    break;
            if(k==m)
            	cout<<"pattern exist at "<<i-m<<endl;
        }
        ht=ht-int(txt[i-m])+int(txt[i]);
    }
    
}

int main()
{
    char txt[]="HONESTYISBHONSTPOLICY";
    char pat[]="ONE";
    rabin_karp(txt, pat);
}

