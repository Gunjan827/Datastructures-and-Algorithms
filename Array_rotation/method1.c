/*
function rotate(ar[], d, n) that rotates arr[] of size n by d elements
METHOD 1 (Using temp array)

Input arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2, n =7
1) Store d elements in a temp array
   temp[] = [1, 2]
2) Shift rest of the arr[]
   arr[] = [3, 4, 5, 6, 7, 6, 7]
3) Store back the d elements
   arr[] = [3, 4, 5, 6, 7, 1, 2]
*/



#include <stdio.h>


int main(){
	int n, d ;
	printf("Enter the size of the array :");
	scanf("%d", &n);
	printf("Enter the number by which the array is rotated :");
	scanf("%d", &d);
	int arr[n], temp[d];
	printf("Enter the array\n");
	for (int i = 0; i < n; ++i) // Input arr[n]
	{
		scanf("%d", &arr[i]);
	}
	printf("The array before rotation is :");
	for (int i = 0; i < n; ++i)//array before rotation
	{
		printf(" %d",arr[i] );
	}
	for (int i = 0; i < d; ++i)//assign d elements of arr[] to temp[]
	{
		temp[i] = arr[i];
	}
	
	printf("\nThe array after rotation is :");
	//Rotation of array
	for( int i = d; i < n; ++i){
		arr[i - d] = arr[i];
	}
	for (int i = (n-d), j = 0; i < n , j < d; ++i , ++j)
	{
		arr[i] = temp[j];
	}
    for (int i = 0; i < n; ++i)//print array
	{
		printf(" %d",arr[i] );
	}
	printf("\n");
	return 0;
}