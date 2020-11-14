//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
void print(int ar[], int n)
{
    int i=0;
    while(i<n)
    {
        cout<<"index = "<<i<<" value= "<<ar[i]<<" "<<endl;
        i=i+2;
    }
}

int main()
{
   int t;
   cin>>t;
  while(t--)
   {
     int ar[100001]={0};
     int n;
     cin>>n;
     cout<<"test case # "<<t<<"    No of elements "<<n<<endl;
     for(int i=0;i<n;i++)
     {
      cin>>ar[i];
      cout<<ar[i]<<" ";
     }
     cout<<endl;
      print(ar,n);
      cout<<endl;
     }
return 0;
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// ar[] is the array 
// n is the number of elements in array.
