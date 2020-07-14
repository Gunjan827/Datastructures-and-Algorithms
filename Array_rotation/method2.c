/*
function rotate(ar[], d, n) that rotates arr[] of size n by d elements
METHOD 2 (Rotate one by one)

leftRotate(arr[], d, n)
start
  For i = 0 to i < d
    Left rotate all elements of arr[] by one
end
*/



#include <stdio.h>


int main(){
	int n, d ;
	printf("Enter the size of the array :");
	scanf("%d", &n);
	printf("Enter the number by which the array is rotated :");
	scanf("%d", &d);

	int arr[n];
	printf("Enter the array\n");
	for (int i = 0; i < n; ++i) //Input array
	{
		scanf("%d", &arr[i]);
	}
	printf("The array before rotation is :");
	for (int i = 0; i < n; ++i)//array before rotation
	{
		printf(" %d",arr[i] );
	}
    for (int i = 0; i < d; ++i)
    {
    	int temp = arr[0];
	    for (int i = 0; i < n-1; ++i)
	    {
		    arr[i] = arr[i+1];
	    }
	    arr[n-1] = temp;
    }
	printf("\nThe array after rotation is :");
	for (int i = 0; i < n; ++i)//print array
	{
		printf(" %d",arr[i] );
	}
	printf("\n");
	return 0;
}