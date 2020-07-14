/*COUNT NUMBER OF OCURRENCES(or frequency) IN A SORTED ARRAY:

Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[]. 
Expected time complexity is O(Logn)
Examples:

  Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 2
  Output: 4 // x (or 2) occurs 4 times in arr[]

  Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 3
  Output: 1 */

#include <iostream>
using namespace std;

int first(int arr[], int start, int end, int num){
	int mid;
	while(end >= start){
		mid= start + (end-start)/2 ;
		if(mid == 0 || num > arr[mid-1] && arr[mid]==num )
			return mid;
		if(num > arr[mid])
			return first(arr, mid+1, end, num);
		else
			return first(arr, start, mid-1, num);
	}
	return -1;
}

int last(int arr[], int start, int end, int num){
	int mid;
	while(end >= start){
		mid = start + (end-start)/2 ;
		if(mid == end || num < arr[mid+1] && arr[mid] == num)
			return mid;
		if(num < arr[mid])
			return last(arr, start, mid-1, num);
		else
			return last(arr, mid+1, end, num);
	}
	return -1;
}


int count(int arr[], int start, int end, int num){
	int first_occur, last_occur;
	first_occur = first(arr, start, end, num);
	last_occur = last(arr, start, end, num);
	return last_occur - first_occur + 1;
}

int main(){
 	int n, num, val;
 	cout<<"Enter the size of array\n";
 	cin>>n;
 	int arr[n];
 	cout<<"Enter the array\n";
 	for (int i = 0; i < n; ++i)
 	{
 		cin>>arr[i];
 	}
 	cout<<"Enter the number to count number of occurrence of it\n";
 	cin>>num;
 	val = count(arr, 0, n-1, num );
 	if(val == -1)
 		cout<<"The number is not present\n";
 	else
 		cout<<"Answer = "<<val;
 	return 0;
 }