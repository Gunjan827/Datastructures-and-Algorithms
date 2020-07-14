/*Given an unsorted array and two numbers x and k, find k closest values to x.
Input : arr[] = {10, 2, 14, 4, 7, 6}, x = 14, k = 3
Output : 14,2,4 */

#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

void k_closest_nums(int arr[], int x, int k, int n){
	priority_queue <pair<int,int>> maxh;
	pair<int,int> m;

	for (int i = 0; i < n ; ++i)
	{
		maxh.push(make_pair(abs(arr[i] - x), arr[i]));
		if(maxh.size() > k){
			maxh.pop();
		}
	}
	while(!maxh.empty()){
		m = maxh.top();
		cout<< m.second << " ";
		maxh.pop();
	}
	cout<<endl;
}

int main(){
	int size, k , x;
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
	cout<<"Enter value of x:\n";
	cin>>x;
	k_closest_nums(arr , x, k, size);
	return 0;
}