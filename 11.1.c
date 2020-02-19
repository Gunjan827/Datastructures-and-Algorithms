/*Program to read in an array of integers and print its elements in reverse order*/

#include <stdio.h>
int main()
{
	unsigned int n, *p;
	printf("Enter the size of the array\n");
	scanf("%d", &n);
	unsigned int arr[n];
	p = &arr[0];
	printf(" Base Add %p\n", p );
	printf("Enter the array\n");
	for ( ; p < &arr[n] ; p++)
	{
		scanf("%d",p);
	}
    printf("New %p\n", p );
	for(p=p-1; p >= &arr[0] ; p--){
		printf("%d\n", *p );
	}



	return 0;
}