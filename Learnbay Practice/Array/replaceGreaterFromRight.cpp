/*
**********************
Given an array replace every element by greater element on right side (not including current element)
**********************
*/
#include<bits/stdc++.h>
using namespace std;

void replace(int arr[], int n)
{
	int max_so_far=arr[n-1];	
	arr[n-1]=-1;
	for(int i=n-2;i>=0;i--)
	{
		int temp=arr[i];
		if(max_so_far>arr[i+1])
			arr[i]=max_so_far;
		else
			arr[i]=arr[i+1];

		if(max_so_far<temp)
			max_so_far=temp;
	}


	for(int i=0; i<6; i++)
		{
			cout<<arr[i]<<" ";
		}
}

int main()
{
	int arr[]={16,17,4,3,5,2};
	replace(arr,6);
	return 0;
}