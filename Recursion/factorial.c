/*Program to calculate factorial through recursion*/

#include <stdio.h>
int factorial(int num);


int main(){
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	printf("The factorial of %d is %d\n", num , factorial(num) );
	return 0;
}

int factorial(int num){
    int fact;
    if (num > 1)
    {
    	fact = num * factorial(num-1);
    	return (fact);
    }
    else if (num ==1 )
    {
    	return (1);
    }

}