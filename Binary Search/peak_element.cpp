/*A peak element is an element that is greater than its neighbors.

Given an input array nums, where nums[i] ≠ nums[i+1], find a peak element and return its index.

The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.

You may imagine that nums[-1] = nums[n] = -∞.

Example :

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.


NOTE : A BITONIC ARRAY IS AN ARRAY WHICH HAS ONLY ONE PEAK ELEMENT */


#include <iostream>
using namespace std;

int func(int arr[], int start, int end){
	int mid;
	while(start <= end){
		mid = start + (end-start)/2;

		if(arr[mid] > arr[mid-1] && arr[mid]> arr[mid+1])
			return mid;

		else if(arr[mid-1] > arr[mid]){
			end = mid-1;
			continue;
		}
		else if(arr[mid+1] > arr[mid]){
			start = mid+1;
			continue;
		}
	}
	if(arr[start] > arr[start + 1])
		return start;
	if(arr[end] > arr[end-1])
		return end;
}

int main(){
    int n;
 	cout<<"Enter the size of array\n";
 	cin>>n;
 	int start = 0;
 	int arr[n];
 	cout<<"Enter the array\n";
 	for (int i = 0; i < n; ++i)
 	{
 		cin>>arr[i];
 	}
 	
 	
 	cout<<"The index of the peak element is "<<func(arr, start, n-1);
 	return 0;	
}