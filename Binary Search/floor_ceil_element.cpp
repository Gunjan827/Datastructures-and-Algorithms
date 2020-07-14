/**/

#include <iostream>
using namespace std;


int floor(int arr[], int start, int end, int num){
    int mid = start + (end-start)/2;
    if(start > end)
    	return -1;
    if(arr[end] < num)
    	return arr[end];
    if(arr[mid] == num)
    	return arr[mid];
    if(arr[mid] > num)
    	return floor(arr, start, mid-1, num);
    if(arr[mid] < num && arr[mid+1] > num)
    	return arr[mid];
   
    return floor(arr, mid+1, end, num);
}

int ceil(int arr[], int start, int end, int num){
    int mid = start + (end-start)/2;
    if(start > end)
    	return -1;
    if(arr[start] > num)
    	return arr[start];
    if(arr[mid] == num)
    	return arr[mid];
    if(arr[mid] < num)
    	return ceil(arr, mid+1 , end, num);
    if(arr[mid] > num && arr[mid-1] < num)
    	return arr[mid];
   
    return ceil(arr, start, mid-1, num);
}


int main(){
	int n, num;
 	cout<<"Enter the size of array\n";
 	cin>>n;
 	int start = 0;
 	int arr[n];
 	cout<<"Enter the array\n";
 	for (int i = 0; i < n; ++i)
 	{
 		cin>>arr[i];
 	}
 	cout<<"Enter the number whose floor and ceil has to be found:\n";
 	cin>> num;
 	cout<<"\nThe floor of "<<num<<" is: "<< floor(arr, start, n-1, num);
 	cout<<"\nThe ceil of "<<num<<" is: "<< ceil(arr, start, n-1, num);
 	return 0;
}