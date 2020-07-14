#include <iostream>
#include <stack>

using namespace std;


void printNGE(int arr[], int n){

	stack <int> s;

	s.push(arr[0]);
	for (int i = 0; i < n; ++i)
	{
		if(s.empty() == true){
			s.push(arr[i]);
			continue;
		}
		while(s.empty() == false && s.top() < arr[i]){
			cout<< arr[i]<<" is Next greater element of " <<s.top() << endl;
			s.pop();
		}
		s.push(arr[i]);
	}
	while(s.empty() == false){
		cout<< s.top()<< " has no greater element\n";
		s.pop();
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
	printNGE(arr , n);
	return 0;
}