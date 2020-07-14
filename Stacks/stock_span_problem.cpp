/*The stock span problem is a financial problem where we have a series of n daily price quotes for a stock
and we need to calculate span of stock’s price for all n days.The span Si of the stock’s price on a given 
day i is defined as the maximum number of consecutive days just before the given day, for which the price 
of the stock on the current day is less than or equal to its price on the given day.For example, if an
array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7
days are {1, 1, 1, 2, 1, 4, 6}
*/


#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void printSSP(int arr[], int n){
	vector<int> span;
	stack<int> st;
	st.push(0);
	span.push_back(1) ;

	for (int i = 1; i < n; ++i)
	{
		while( st.empty() == false && arr[st.top()] <= arr[i]){
			st.pop();
		}
		if(st.empty() == true)
			span.push_back(i+1) ;
		else
			span.push_back(i - st.top()) ;
		st.push(i);
	}

	for (int i = 0; i < span.size(); ++i)
	{
		cout<<arr[i]<<"----->"<<span.at(i)<<endl;
	}
}



int main()
{
	
	int n;
	cout<<"Enter the size of array\n";
	cin>>n;
	int arr[n];
	cout<< "Enter daily price quotes for n days\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	printSSP(arr , n);
	return 0;
}