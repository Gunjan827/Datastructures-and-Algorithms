/*Given an array of integers, find the closest (not considering distance, but value) smaller on left of 
every element. If an element has no smaller on the left side, print -1.*/


#include <iostream>
#include <stack>

using namespace std;


void printNSL(int arr[], int n){
	stack <int> s;
	int flag = 0;

	s.push(arr[0]);
	cout<<arr[0]<<" ----> -1\n";
	for (int i = 1; i < n; ++i)
	{
		if(s.empty() == true){
			s.push(arr[i]);
		}
		while(s.empty() == false){
			if(s.top() < arr[i]){
				cout<< arr[i]<<" ----> "<<s.top()<<endl;
				flag = 1;
				break;
			}
			else if(s.top() >= arr[i]){
				s.pop();
				flag = 0;
			}
		}
		if(flag == 0){
			cout<<arr[i]<<" ----> -1\n";
		}
		s.push(arr[i]);
	}
}




int main()
{
	
	int n;
	cout<<"Enter the size of array\n";
	cin>>n;
	int arr[n];
	cout<< "Enter the array\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	printNSL(arr , n);
	return 0;
}