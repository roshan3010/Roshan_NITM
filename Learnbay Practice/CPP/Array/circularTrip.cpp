/*
**************************
Given info of petrol pumps , check whether there exist a Circulartour starting from any of the petrol pump.
info : P - petrol at each pump
       D - distance between pumps
Circular Tour Problem :
    P       D
A   4       4
B   6       5
C   7       9
D   6       5

**************************
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{         // 0 1 2 3
    int st=0;
    int end=0;
    int P[]={4,6,7,6};
    int D[]={4,5,9,5};
    int N=sizeof(P)/sizeof(P[0]);
    int i=0;
    int arrear=0;
    int count=0;
    int exit=0;
    while(count!=N)       
    {
        if((arrear+P[end]-D[end])==0)
        {
            end++;
            end=end%4;
            arrear=0;
            count++;
            //exit=0;
        }
        else if((arrear+P[end]-D[end])>0)
        {
            arrear=(arrear+P[end])-D[end];
            end++;
            end=end%N;
            count++;
          //  exit=0;
        }
        else
        {
            arrear=0;
            st++;
           // exit++;
            st=st%N;
            end=st;
            count=0;
        }
    }    
    if(exit>N)
    	cout<<"Not Found";
    else
    	cout<<st;
}




















//---------------------------------------------------------------
/* #include<bits/stdc++.h>
using namespace std;

int main()
{         // 0 1 2 3
    int P[]={4,6,7,6};
    int D[]={4,5,9,5};
    int i=0;
    int n=sizeof(D);        // n=4
    int count;
    int k=0;
    while(k<n)              // k = 0
    {
        i=k;                // i = 0
        count=0;            // count = 0  
        int TP=0;  
        //int P[]={4,6,7,6};
        while(TP>=D[i])   // 4>=4 true   // 6>=5 true    // 8>=9 false
        {
            TP=P[i+1]+(P[i]-D[i]);     //  P[1]=6+(4-4) = 6 // P[2]=7+(6-5)=8   //   P[]=
            i++;                           //  i=1 2
            i=i%4;                         //  i=1 2
            count++;                       //  count=1 2
        }
        if(count==n)                       // 
            cout<<"YES";            
        k++;                                
    }    
} */


