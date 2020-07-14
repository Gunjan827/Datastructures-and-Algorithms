/*Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1*/

#include <iostream>
using namespace std;

int search_element(int arr[], int start, int end, int val){
	if(high < low)
		return -1;
	if(high == low && arr[low] == val)
		return start;
	int mid = start + (end - start)/2;
	if(arr[mid] == value)
		return mid;
	if(arr[mid] < val  && val < arr[last] || arr[mid] )


}

int main(){
 	int n, val;
 	cout<<"Enter the size of array\n";
 	cin>>n;
 	int arr[n];
 	cout<<"Enter the array\n";
 	for (int i = 0; i < n; ++i)
 	{
 		cin>>arr[i];
 	}
 	cout<<"Enter the value to search\n";
 	cin>>val;

    cout<<search_element(arr, 0, n-1, val)<<endl ;
 	return 0;
 }