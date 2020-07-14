/*Given an array and a number k where k is smaller than size of array, we need to find the k’th smallest 
element in the given array. It is given that all array elements are distinct.

Example:
Input: arr[] = {7, 10, 4, 3, 20, 15}
k = 3
Output: 7*/

#include <iostream>
#include <queue>

using namespace std;

void kth_smallest(int arr[], int size , int k){
	priority_queue <int> maxh;
	for (int i = 0; i < size; ++i)
	{
		maxh.push(arr[i]);
		if (maxh.size() > k){
			maxh.pop();
		}
	}
	cout<<"The kth smallest element is "<<maxh.top();
}

int main(){
	int size;
	int k;
	cout<<"Enter the size of array:\n";
	cin>>size;
	int arr[size];
	cout<< "Enter the array:\n";
	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value of k for kth smallest element:\n";
	cin>>k;
	kth_smallest(arr , size,k);
	return 0;
}