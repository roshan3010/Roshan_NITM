#include<bits/stdc++.h>
using namespace std;


void maxFreqChar(char arr[], int n)
{
    int temp[26]={0};
    int max=0;
    int maxFreqIndex=0;
    for(int i=0; i<n; i++)
    {
        temp[arr[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(max<temp[i])
        {
            max=temp[i];
            maxFreqIndex=i;
        }
    }
    cout<<char('a'+maxFreqIndex);
}


int main()
{
    char arr[]="mississipi";
    int n=sizeof(arr)/sizeof(arr[0]);
    maxFreqChar(arr, n);
}