/*Program in C to find the sum of digits of a number using recursion*/

#include <stdio.h>
int digit_sum(int num);

int main(){
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	printf("The sum of the digits of %d is %d\n",num, digit_sum(num) );
	return 0;
}

int digit_sum(int num){
	if(num == 0){
		return 0;
	}
	else
		return ((num %10) + digit_sum(num/10));
}