/*Given a sorted array of numbers, find if a given number ‘key’ is present in the array. Though we know 
that the array is sorted, we don’t know if it’s sorted in ascending or descending order.*/

#include <iostream>
using namespace std;

 int binSearch_inc(int arr[], int start, int end , int num){
 	int mid = start + (end - start)/2 ;
 	if(num == arr[mid]){
 		return mid;
 	}
 	else if(num > arr[mid]){
 		binSearch_inc(arr, mid+1, end, num);
 	}
 	else if(num < arr[mid]){
 		binSearch_inc(arr, start, mid -1, num);
 	}
 }

 int binSearch_dec(int arr[], int start, int end , int num){
 	int mid = start + (end - start)/2 ;
 	if(num == arr[mid]){
 		return mid;
 	}
 	else if(num < arr[mid]){
 		binSearch_dec(arr, mid+1, end, num);
 	}
 	else if(num > arr[mid]){
 		binSearch_dec(arr, start, mid -1, num);
 	}
 }

int search(int arr[], int start, int end, int num){
	int val;
	if(end + 1 ==0){
		return -1;
	}
	if(end + 1 == 1 ){
		return arr[0];
	}
	else if(end + 1 >1){
		if(arr[0]>arr[1]){
			val = binSearch_dec(arr, start, end, num);
			return val;
		}
		else if(arr[0]<arr[1]){
			val = binSearch_inc(arr, start, end, num);
			return val;
		}
	}
}


 int main(){
 	int n, num;
 	cout<<"enter the size of array\n";
 	cin>>n;
 	int arr[n];
 	cout<<"enter the array\n";
 	for (int i = 0; i < n; ++i)
 	{
 		cin>>arr[i];
 	}
 	cout<<"Enter the number to search\n";
 	cin>>num;
 	cout<<endl<<search(arr, 0, n-1, num );
 	return 0;
 }

