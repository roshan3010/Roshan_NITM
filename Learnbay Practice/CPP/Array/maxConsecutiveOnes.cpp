/*
*************************
Given a binary array, find the maximum number of consecutive 1's if only a single 0 is allowed to be flipped.

Given a binary array, find the maximum number of consecutive 1's if only a m 0's is allowed to be flipped.

      0 1 2 3 4 5 6 7 8 9 10 11  
i/p : 0 1 1 1 0 1 0 0 0 1  0  1
o/p : 5
*************************
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={0,1,1,1,0,1,0,0,0,1,0,1};
    int max=0;
    int e=-1;
    int s=-1;
    int ZC = 0;
    int var=0;
    while(e<sizeof(arr))
    {
        if(ZC<=1)   // if(ZC<=m)  if m zeros allowed to be flipped
        {
            if(arr[e]==0)
            {
                var=e;
                ZC++;
            }
            e++;
        }

        if(ZC>1)
        {
            if(arr[s]==0)
            {
                ZC--;
            }
            s++;
        }
        if(max<(e-s-1))
            max=(e-s-1);
    }

    return max;
}
