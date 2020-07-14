/*Find the Rotation Count in Rotated Sorted array
Consider an array of distinct numbers sorted in increasing order. The array has been rotated (clockwise) k
 number of times. Given such an array, find the value of k.

Examples:

Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation : Initial array must be {2, 3,
6, 12, 15, 18}. We get the given array after 
rotating the initial array twice.

Input : arr[] = {7, 9, 11, 12, 5}
Output: 4

Input: arr[] = {7, 9, 11, 12, 15};
Output: 0
*/

#include <iostream>
using namespace std;
 int rotation_count(int arr[], int start, int end){
     if(end<start)
     	return -1;
     if(start == end)
     	return start;
     int mid = start + (end - start)/2 ;
     if(arr[mid] < arr[mid-1])
     	return mid;
     if(arr[mid] > arr[mid+1])
     	return mid + 1;
     if(arr[mid] > arr[end])
     	return rotation_count(arr, mid+1, end);
     return rotation_count(arr, start, mid-1);
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

    cout<<rotation_count(arr, 0, n-1)<<endl ;
 	return 0;
 }