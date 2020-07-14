/*Given a list of points on the 2-D plane and an integer K. The task is to find K closest points to the 
origin and print them.

Note: The distance between two points on a plane is the Euclidean distance.

Example:
Input : point = [[3, 3], [5, -1], [-2, 4]], K = 2*/


#include <iostream>
#include <queue>
#include <utility>

using namespace std;

void func(int arr[][2], int n, int k){
	priority_queue <pair<int, pair<int, int>>> maxh;

	for (int i = 0; i < n; ++i)
	{
		maxh.push(make_pair((arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1]), make_pair(arr[i][0], arr[i][1])));
		if(maxh.size() > k){
			maxh.pop();
		}
	}
	while(!maxh.empty()){
		cout << ((maxh.top()).second).first <<" "<<((maxh.top()).second).second<<endl;
		maxh.pop();
	}
}

int main(){
	int size, k;
	cout<<"Enter the size of array:\n";
	cin>>size;

	int arr[size][2];
	cout<< "Enter the array:\n";
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Enter the value of k:\n";
	cin>>k;

	func(arr , size, k);
	return 0;
}

