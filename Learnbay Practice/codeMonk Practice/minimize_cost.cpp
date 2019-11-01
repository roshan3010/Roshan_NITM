#include <iostream>
using namespace std;
int main()
{
    int n,k;
   // freopen("input8.txt","r",stdin);
   // freopen("output8.txt","w",stdout);
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int j = 0;
    for(int i=0;i<n;i++){
        
        if(arr[i]<0)
        continue;
      //  cout<<arr[i]<<" ";
        
        
        
        while(i-j>k)
        ++j;
        
       
        while(arr[i]!=0 && (i+k)>=min(n-1,j)){
            if(arr[j]>0){
                j++;
                continue;
            }
            //cout<<i<<" "<<j<<"\n";
            int x = min(arr[i],abs(arr[j]));
            arr[i]-=x;
            arr[j]+=x;
            if(arr[j]>=0)
                j++;
            }
        
        
        
    }
    long long  ans =0;
    for(int i=0;i<n;i++)
    {
    ans+=abs(arr[i]);
   // cout<<ans<<" ";
    }
    cout<<ans;
}