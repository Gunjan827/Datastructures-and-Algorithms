/*Given an array of letters sorted in ascending order, find the smallest letter in the the array which is 
greater than a given key letter.*/

#include <iostream>
using namespace std;

int func(char arr[], int start, int end, char key){
	int mid;

	while(start <= end){
		mid = start + (end - start)/2;
		if(arr[mid] == key)
		    return mid+1;
		if(arr[mid] > key){
		    end = mid - 1;
		    continue;
		}
		if(arr[mid] < key){
			start = mid+1;
			continue;
		}
	}
	return 0;
}

int main(){
	int n, val;
	char key;

	cout<<"Enter the size of the array\n";
	cin >> n;

	char arr[n];
    int start = 0;
    cout<<"Enter the array\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	cout<<"Enter the key\n";
	cin>> key;

	val = func(arr, start, n-1, key );

    if(val == 0)
    	cout<<"Key is not found in the array\n";
    else
    	cout<<"The element after the key is "<< arr[val];

    return 0;


}