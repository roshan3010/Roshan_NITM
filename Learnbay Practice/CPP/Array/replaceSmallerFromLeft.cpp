/*
**********************
Given an array replace every element by smaller element on left side (not including current element)
**********************
*/
#include<bits/stdc++.h>
using namespace std;

void replace(int arr[], int n)
{
	int min_so_far=arr[n-1];	
	arr[n-1]=INT_MAX;
	for(int i=0;i<n;i--)
	{
		int temp=arr[i];
		if(min_so_far>arr[i+1])
			arr[i]=min_so_far;
		else
			arr[i]=arr[i+1];

		if(min_so_far<temp)
			min_so_far=temp;
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