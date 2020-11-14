#include<bits/stdc++.h>
using namespace std;


int editDistance(string fromString, string toString)
{
    int map1[26];
    int map2[26];
    
    memset(map1,0,sizeof(map1));
    memset(map2,0,sizeof(map2));
    int count=0;
  
    for(int i=0; i<fromString.length();i++)
    {
    	map1[int(fromString[i]-'a')]++;
    }
   
    for(int i=0; i<toString.length();i++)
    {
    	map2[int(toString[i]-'a')]++;
    }
    
    for(int i=0; i<26;i++)
    {
    	count+=min(map1[i],map2[i]);
    }
    
    return max(fromString.length()-count, toString.length()-count);
}

int main()
{
    string str1="tuesday";
    string str2 = "wednesday";
    cout<<editDistance(str1,str2);
}