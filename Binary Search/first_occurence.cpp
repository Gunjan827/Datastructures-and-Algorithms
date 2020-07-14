/*Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last 
occurrences of an element x in the given array.

Example:

Input : arr[] = {1, 3, 5, 5, 5, 5 ,67, 123, 125}    
        x = 5
Output : First Occurrence = 2
         Last Occurrence = 5*/
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


int main(){
 	int n, num;
 	cout<<"Enter the size of array\n";
 	cin>>n;
 	int arr[n];
 	cout<<"Enter the array\n";
 	for (int i = 0; i < n; ++i)
 	{
 		cin>>arr[i];
 	}
 	cout<<"Enter the number to find first and last occurrence of it\n";
 	cin>>num;
 	cout<<first(arr, 0, n-1, num )<<endl;
 	cout<<last(arr, 0, n-1, num )<<endl;
 	return 0;
 }