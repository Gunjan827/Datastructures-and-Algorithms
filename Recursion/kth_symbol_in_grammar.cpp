/*On the first row, we write a 0. Now in every subsequent row, we look at the previous row and replace
 each occurrence of 0 with 01, and each occurrence of 1 with 10.

Given row N and index K, return the K-th indexed symbol in row N. (The values of K are 1-indexed.)
 (1 indexed).*/


#include <iostream>
#include <cmath>

using namespace std;

bool func(int n, int k){
	if(n == 1 && k == 1){
		return 0;
	}

	int mid = pow(2, n-1)/2 ;
	
	return (k <= mid)? func(n-1,k) : !func(n-1, k- mid) ;
	}

int main(){
	int n, k;
	cout<<"Enter the value of n and k:\n";
	cin>>n>>k;
	cout<<"The value at nth row and kth column is : "<<func(n,k)<<endl;
	return 0;
}