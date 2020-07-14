/*Write an efficient program for printing k largest elements in an array. Elements in array can be in any 
order.

For example, if given array is [1, 23, 12, 9, 30, 2, 50] and you are asked for the largest 3 elements i.e., 
k = 3 then your program should print 50, 30 and 23.*/

#include <iostream>
#include <queue>

using namespace std;

void k_largest_element(int arr[], int size, int k){
	priority_queue <int, vector<int>, greater<int>> minh;

	for (int i = 0; i < size; ++i)
	{
		minh.push(arr[i]);
		if(minh.size() > k){
			minh.pop();
		}
	}
	while(!minh.empty()){
		cout<<minh.top()<<" ";
		minh.pop();
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
	cout<<"Enter the value of k for k largest elements:\n";
	cin>>k;
	k_largest_element(arr , size,k);
	return 0;
}