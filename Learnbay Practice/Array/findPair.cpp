#include<bits/stdtr1c++.h>
using namespace std;

void findPair(int arr[], int n, int k)
{
    int i=0;
    int j=n-1;
    int flag=0;
    
    while(i<j)
    {
        if((arr[i]+arr[j])>k)
           j--;
        else if((arr[i]+arr[j])<k)
            i++;
        else{
            cout<<arr[i]<<" "<<arr[j];
            flag=1;
            break;
        }
    }
    if(!flag)
        cout<<"No Solution";
}

int main()
{
    int arr[]={2,9,6,3,1,10,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=9;
    sort(arr,arr+n);
    /*for(int i=0; i<n; i++)
    	cout<<arr[i]<<" ";*/
    findPair(arr,n,k);
}