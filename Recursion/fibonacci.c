/*Program to generate fibonacci series through recursion*/

#include <stdio.h>
int fibonacci(int num);

int main(){

	int n;
	printf("Enter the value of n to give first n fibonacci numbers :");
	scanf("%d", &n);
	for(int i = 0 ; i <= n ; i++){
		printf("%d\t",fibonacci(i) );
	}
	printf("\n");
	return 0;
}

int fibonacci(int num){
    int n;
    if (num == 0)
    {
    	return (0);
    }
    else if (num == 1)
    {
    	return (1);
    }
    else{
    	n = fibonacci(num-1) + fibonacci(num-2);
        return (n);
    }

}