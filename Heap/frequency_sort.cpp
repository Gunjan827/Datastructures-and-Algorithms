/*Print the elements of an array in the increasing frequency.

Example:
Input : arr[] = {2, 5, 2, 8, 5, 6, 8, 8}
Output : arr[] = {8, 8, 8, 2, 2, 5, 5, 6}*/



#include <iostream>
#include <unordered_map>
#include <queue>
#include <utility>

using namespace std;

void frequency_sort(int arr[], int n){
	unordered_map <int, int> mp;
	priority_queue <pair<int, int>> maxh;


	for(int i = 0; i < n ; i++){
		mp[arr[i]]++;
	}

	for(auto i = mp.begin() ; i != mp.end() ; ++i){
		maxh.push(make_pair(i->second, i->first));
	}

	while(!maxh.empty()){
		int freq = (maxh.top()).first;
		for(auto i = 1 ; i <= freq ; i++){
			cout<<(maxh.top()).second<< " ";
		}
		maxh.pop();
	}
	cout<<endl;
}


int main(){
	int size;
	cout<<"Enter the size of array:\n";
	cin>>size;

	int arr[size];
	cout<< "Enter the array:\n";
	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}

	frequency_sort(arr , size);
	return 0;
}