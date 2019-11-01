#include<bits/stdc++.h>
using namespace std;

void indent(int n)
{
	for(int i=0; i<n;i++)
		cout<<"    ";
}

void permuteHelper(string word, string chosen)
{
	indent(chosen.length());
	cout<<"permuteHelper ("<<word<<" , "<<chosen<<")"<<endl;
    if(word.empty())
    {
        cout<<chosen<<"\n";
    }
    else
    {
        for(long long i=0; i<word.length();i++)
        {
            char c=word[i];
            chosen+=c;
            word.erase(i,1);

            permuteHelper(word, chosen);
            word.insert(i,1,c);
            chosen.erase(chosen.length()-1, 1);
        }   
    }
}


void permute(string word)
{
    permuteHelper(word,"");
}

int main()
{
    string word="ROSHAN";
    permute(word);
}