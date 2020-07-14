#include <stdio.h>
void sort(int arr[], int length);
void interpolation_search(int arr[], int length, int num);


int main(){
	int num, n;
	printf("Enter the size of array and the array\n");
	scanf("%d", &n);//Size of array
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

	interpolation_search(arr, n, num);

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


void interpolation_search(int arr[], int length, int num){
	int first, last, pos;
	first = 0;
	last = length -1;
	while (first <= last){

		pos = first + ((num-arr[first])*(last-first) / (arr[last]-arr[first]) );
        if (arr[pos] == num)
        {
        	printf("The number is found at location %d \n", pos+1 );
        	break;
        }
        else if (arr[pos] < num)
        {
        	first = pos + 1;
        }
        else{
        	last = pos - 1;
        }
	  }

	  if(first > last){
	   	printf("%d is not present in the array\n", num );
	  }
}