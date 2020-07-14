#include <stdio.h>
#include <math.h>
void sort(int arr[], int length);
void jump_search(int arr[], int n, int num);
void linear_search(int arr[], int i, int j,int num);

int main(){
	int n, num;
	printf("Enter the size of the array :\t");
	scanf("%d", &n);
	printf("Enter the array :\t");
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
	

	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",  arr[i]);
	}
	jump_search(arr, n, num);

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


void jump_search(int arr[], int n, int num){

    int jump = sqrt(n);
    printf("The value of jump is %d\n",jump );
    for (int i = 0; i < n;  )
    {
    	if(arr[i] == num){
    		printf("%d is found at location %d in the array \n",num, i+1 );
    		break;
    	}
    	else if(arr[i] < num){
    		i = i + jump;
    		continue;
    	}
    	else{
    		linear_search(arr, i-jump, i, num);
    		break;
    	}
    }


}


void linear_search(int arr[], int i, int j,int num){
	i++;
	for ( i; i < j; ++i)
	{
		if (arr[i] == num)
		{
			printf("%d is found at location %d\n", num, i+1 );
			break;
		}
		else 
			continue;
	}
}


