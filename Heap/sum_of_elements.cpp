/*Given an array of integers and two numbers k1 and k2. Find the sum of all elements between given two 
k1’th and k2’th smallest elements of the array. It may  be assumed that all elements of array are 
distinct.

Example :
Input : arr[] = {20, 8, 22, 4, 12, 10, 14},  k1 = 3,  k2 = 6  
Output : 26          
         3rd smallest element is 10. 6th smallest element 
         is 20. Sum of all element between k1 & k2 is
         12 + 14 = 26*/


#include <iostream>
#include <queue>

using namespace std;


int kth_smallest(int arr[], int n, int k){
	priority_queue <int> maxh;

	for (int i = 0; i < n; ++i)
	{
		maxh.push(arr[i]);
		if(maxh.size() > k){
			maxh.pop();
		}
	}
	return maxh.top();
}


int main(){
	int size, k1, k2, sum = 0;
	cout<<"Enter the size of the array\n";
	cin>>size;
	cout<<"Enter k1 and k2\n";
	cin>>k1>>k2;
	int arr[size];
	cout<<"Enter the array\n";
	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}
	k1 = kth_smallest(arr, size, k1);
	k2 = kth_smallest(arr, size, k2);

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > k1 && arr[i] < k2)
		{
			sum = sum + arr[i];
		}
	}
	cout<<"The sum of elements between k1'th smallest "<<k1<<" and k2'th smallest "<<k2<<" is "<<sum<<endl;
	return 0;
}