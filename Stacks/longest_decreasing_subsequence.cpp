/*This program involves finding longest decreasing subsequence using stack*/
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

void lds(int arr[], int n){

	stack <int> s;
	vector <int> v;
	int count =0;
	s.push(arr[0]);

	for (int i = 1; i < n; ++i)
	{

		if(s.empty() == true){
			s.push(arr[i]);
			continue;
		}
		
		
		if(s.top() <= arr[i]){
			v.push_back(count);
			count = 0;
			while(s.empty() == false){
			    s.pop();
			}
		}
		else if(s.top() > arr[i]){
			count++;
		}
		s.push(arr[i]);
	}
	
	cout<<*max_element(v.begin(), v.end()) << endl;
}

int main()
{
	int size;
	cout<<"Enter the size of array\n";
	cin>>size;
	int arr[size];
	cout<<"Enter the array\n";
	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}
	lds(arr, size);
	return 0;
}