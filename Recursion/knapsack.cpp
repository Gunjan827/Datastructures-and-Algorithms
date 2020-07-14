/*Knapsack problem using Recursion*/


#include <iostream>
using namespace std;


int max(int a, int b){
	return((a>b)?a:b);
}


int knapsack(int W, int wt[], int val[], int n){
	if(n==0 || W==0){
		return 0;
	}
	if(wt[n-1] > W)
		return knapsack(W, wt, val, n-1);

	else{
		return max((val[n-1] + knapsack(W-wt[n-1], wt, val, n-1)) , 
			knapsack(W, wt, val, n-1));
	}
}


int main()
{
	int W, n;
	cout<<"Enter the size of array\n";
	cin>>n;
	cout<<"Enter the max capacity of knapsack\n";
	cin>>W;
	int val[n], wt[n];
	cout<<"Enter the weights of n items:\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>wt[i];
	}
	cout<<"Enter the values of n items:\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>val[i];
	}
	cout<<knapsack(W, wt, val, n);
	return 0;
}
