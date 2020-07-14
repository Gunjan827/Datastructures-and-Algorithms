/***** Given two unsorted array. Find all pairs whoe sum is x*****/
/*
1) Store elements of first array in hash table.
2) For second array i.e. arr2[], subtract each element from sum or x and check result in hashtable.
3) If result is present in the hashtable, print the element and the key in the hashtable. 
*/

#include<iostream>
#include <unordered_set>
 
using namespace std;

void findPairs(int arr_1[], int arr_2[], int len_1, int len_2, int sum){

	unordered_set<int> s;
	for(auto i = 0 ; i < len_1 ; i++){
		s.insert(arr_1[i]);
	}

	for(auto i = 0 ; i < len_2 ; i++){
		if (s.find(sum - arr_2[i]) != s.end())
		{
			cout<< "The Pairs are " << arr_2[i] <<", "<<(sum - arr_2[i]);
		}
		else
			cout<< "Pairs not found";
	}
}

int main(){
	int n , m ;
	cout<< "Enter the size of the first array";
	cin >> n;
	int arr_1[n];
	for(int i = 0 ; i < n ; i++){
		cout<< "Enter value: ";
		cin >> arr_1[n];
	}
	cout<< "Enter the size of the second array";
	cin >> m;
	int arr_2[m];
	for(int i = 0 ; i < m ; i++){
		cout<< "Enter value: ";
		cin >> arr_2[m];
	}
    int sum;
	cout<<"Enter the sum";
	cin>>sum;
	findPairs(arr_1, arr_2, n, m, sum );
	return 0;
}

