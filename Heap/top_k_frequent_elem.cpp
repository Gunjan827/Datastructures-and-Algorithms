/*Given an array of n numbers. Your task is to read numbers from the array and keep at-most K numbers at 
the top (According to their decreasing frequency) every time a new number is read. We basically need to 
print top k numbers sorted by frequency when input stream has included k distinct elements, else need to
print all distinct elements sorted by frequency.*/



#include <iostream>
#include <unordered_map>
#include <queue>

using namespace std;

void top_k_frequent_elem(int arr[], int n, int k){
	unordered_map <int,int> m;
	priority_queue <pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> minh;

	for (int i = 0; i < n; ++i)
	{
		m[arr[i]]++;
	}

	for(auto i = m.begin() ; i != m.end() ; ++i){
		minh.push(make_pair(i->second, i-> first));
		if(minh.size() > k){
			minh.pop();
		}
	}
	
	while(!minh.empty()){
		cout<< (minh.top()).second<<" ";
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
	cout<<"Enter the value of k to find top k frequent numbers:\n";
	cin>>k;
	top_k_frequent_elem(arr , size,k);
	return 0;
}