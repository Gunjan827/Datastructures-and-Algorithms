/*Also calles NEARLY SORTED ARRAY / K SORTED ARRAY


Given an array of n elements, where each element is at most k away from its target position, devise an 
algorithm that sorts in O(n log k) time. For example, let us consider k is 2, an element at index 7 in
the sorted array, can be at indexes 5, 6, 7, 8, 9 in the given array.

Example:
Input : arr[] = {6, 5, 3, 2, 8, 10, 9}
k = 3 
Output : arr[] = {2, 3, 5, 6, 8, 9, 10}*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void k_sorted_array(int arr[], int size, int k){
	priority_queue <int, vector<int> , greater<int>> minh;
	vector<int> v;

	for (int i = 0; i < size; ++i)
	{
		minh.push(arr[i]);
		if(minh.size() > k){
            v.push_back(minh.top());
            minh.pop();
		}
	}
	while(!minh.empty()){
		v.push_back(minh.top());
		minh.pop();
	}
	cout<< "The sorted array is :\n";
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v.at(i)<<" ";
	}
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
	cout<<"Enter the value of k:\n";
	cin>>k;
	k_sorted_array(arr , size,k);
	return 0;
}