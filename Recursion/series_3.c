/*Program in C to print the array elements using recursion.*/


#include <stdio.h>
#include <string.h>
int func(int arr[], int length);

int main(){
	int arr[] = {100, 105, 110, 115, 120, 125, 130};
	int n = sizeof(arr)/sizeof(int);
	printf("The elements of the array are:\n");
	func(arr, n-1);
	return 0;
}

int func(int arr[], int length){
	if (length < 0)
	{
		return 0;
	}
	else{
		func(arr, length-1);
		printf("%d\t\n", arr[length]);
		return 0;
	}
}