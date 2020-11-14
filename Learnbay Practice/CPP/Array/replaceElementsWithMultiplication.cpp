/*
*************************
Given an array of elements replace every element with multiplication of its previous and next element with following exceptions:
1. First element is replaced by multiplication of First and second element.
2. Last element is replaced by multiplication of Last and second Last element.

i/p : {2,3,4,5,6}
o/p : {6,8,15,24,30}

*************************
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,3,4,5,6};
    int temp;
    int n=sizeof(arr);
    int temp1=arr[0];
    for(int i=0;i<sizeof(arr);i++)
    {
        temp=arr[i];
        if(i==0)
        {
            arr[i]=temp*arr[i+1];
        }
        else if(i==(sizeof(arr)-1))
        {
            arr[i]=arr[n-1]*temp1;
        }
        else
        {
            //temp=arr[i];
            arr[i]=temp1*arr[i+1];
            temp1=temp;
        }
    }

    for(int i=0; i<sizeof(arr);i++)
        cout<<arr[i]<<" ";
    
}

//####################################################################################

// C++ program to update every array element with 
// multiplication of previous and next numbers in array 
#include<iostream> 
using namespace std; 

void modify(int arr[], int n) 
{ 
	// Nothing to do when array size is 1 
	if (n <= 1) 
	return; 

	// store current value of arr[0] and update it 
	int prev = arr[0]; 
	arr[0] = arr[0] * arr[1]; 

	// Update rest of the array elements 
	for (int i=1; i<n-1; i++) 
	{ 
		// Store current value of next interation 
		int curr = arr[i]; 

		// Update current value using previos value 
		arr[i] = prev * arr[i+1]; 

		// Update previous value 
		prev = curr; 
	} 

	// Update last array element 
	arr[n-1] = prev * arr[n-1]; 
} 

// Driver program 
int main() 
{ 
	int arr[] = {2, 3, 4, 5, 6}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	modify(arr, n); 
	for (int i=0; i<n; i++) 
	cout << arr[i] << " "; 
	return 0; 
} 
