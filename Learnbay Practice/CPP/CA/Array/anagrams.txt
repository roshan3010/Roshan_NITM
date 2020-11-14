/*
******************************
Check anagrams for all cases.
******************************
*/

#include<bits/stdc++.h>
using namespace std;

bool anagrams(string str1, string str2)
{
    int arr[26]={0};
    int flag=0;
    for(int i=0; i<str1.size();i++)
    {
        arr[str1[i]-'a']++;
    }
    for(int i=0; i<str2.size();i++)
    {
        arr[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==1)
            flag=1;
    }
    if(flag==1)
        cout<<"NO";
    else 
        cout<<"YES";
    
}

int main()

{
    string str1, str2;
    cin>>str1>>str2;
    anagrams(str1,str2);
}