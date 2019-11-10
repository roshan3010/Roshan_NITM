#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string  str)
{
    stack<char> s;
    char ch;

    //for(int j=0; j<(sizeof(str)/sizeof(str[0])); j++)
    /*for(int j=0; j<str.length(); j++)
        cout<<str[j]<<" ";*/
    for(int i=0; i<str.length(); i++)
    {
        //cout<<str[i]<<" ";
        if(str[i]=='[' or str[i]=='{' or str[i]=='(' )
        {
            s.push(str[i]);
            continue;
        }
        else
        {
            if(s.empty())
                return false;

            
            switch (str[i])
            {
            case ')':
            	ch=s.top();
            	s.pop();
                if(ch=='{' or ch=='[')
                    return false;
                break;

            case '}':
            	ch=s.top();
            	s.pop();
                if(ch=='(' or ch=='[')
                    return false;
                break;

            case ']':
            	ch=s.top();
            	s.pop();
                if(ch=='(' or ch=='{')
                    return false;
                break;
            }
        }
        //i++;
    }

    return (s.empty());
    
}

int main()
{
    string str="[{()}]";
    cout<<isBalanced(str);
}