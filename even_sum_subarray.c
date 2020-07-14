#include <stdio.h>
void subarray( int arr[], int length);

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
	int arr[num];
	printf("Enter the costs of firecrackers\n");
	for(int i = 0; i < num ; i++ ){
	    scanf("%d", &arr[i]);
	}
	subarray( arr , num);
    
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
void subarray( int arr[], int length){
    int count = 0;
    for(int j = 0 ; j < length-1 ; j++){
        int sum = 0;
        for(int i = j; i < length ; i++){
            sum = sum + arr[i];
            if( sum % 2 == 0){
                count++;
            }
            else
                sum = sum - arr[i];
        }
    }
    printf("Output : %d",count);
}