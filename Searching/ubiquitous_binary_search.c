#include <stdio.h>
void sort(int arr[], int length);
void ubiquitous_binary_search(int arr[], int low, int high, int num);


int main(){
	int num, n;
	printf("Enter the size of array and the array\n");
	scanf("%d", &n);//Size of array
	int low = 0;//lowest index of the array
	int high = n-1;//highest index of the array
	int arr[n];
	for (int i = 0; i < n; ++i) //Inputing array
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter the number to be searched\n");
	scanf("%d", &num); //Number to be searched
     

    printf("Firstly the array will be sorted and then the number will be searched \n");
    printf("and the corresponding location will be displayed \n");

	sort(arr, n);
	
	printf("\nThe sorted array is\n");
	for (int i = 0 ; i < n; ++i)
	{
		printf("%d\n", arr[i] );
	}

	ubiquitous_binary_search(arr, low, high, num);

	return 0;

}


void sort(int arr[], int length){
	int temp = 0;
	for (int i = 0; i < length-1; ++i)
	{
		for (int j = i+1; j < length ; ++j)
		{
			if ( arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
		
	}

}


void ubiquitous_binary_search(int arr[], int low, int high, int num){
	int m;
	while ( (high - low) > 1){
		m = low + ((high - low)/2);

		if ( arr[m] <= num)
		{
			low = m;
		}
		else
			high = m;
	}

	if( arr[low] == num){
		printf("%d is found at location %d\n", num, low+1 );
	}
	else if ( arr[high] == num)
	{
		printf("%d is found at location %d\n", num, high+1 );
	}
	else
		printf("%d is not found\n", num);
}