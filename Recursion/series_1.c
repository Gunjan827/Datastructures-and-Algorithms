/*Program to calculate the value of the series 
f(x) = x - (x^3/x!) + (x^5/5!) - (x^7/7!) + ...
where the value of n for series termination is inputted from user given n is an odd num*/

#include <stdio.h>
#include <math.h>
float fun(int num, int x);
int factorial(int num);

int main(){
	int n;
	float x;
	float pos_part = 0, neg_part= 0, answer ;
	printf("Enter the value of n(odd number) so the series can be terinated:");
	scanf("%d", &n);

	printf("\nEnter the value of x:");
	scanf("%f", &x);

	for(int i = 1; i <= n ; i+=4){
		pos_part = pos_part + fun(i, x);
	}
	for(int i = 3 ; i <= n ; i += 4){
		neg_part = neg_part + fun(i, x);
	}
	answer = pos_part - neg_part;
    printf("The value of the series for n = %d and x = %f is: %f\n",n, x, answer );
    return 0;
}


float fun(int num, int x){
	float value;
	value = pow(x, num)/factorial(num); 
	return value; 
}

int factorial(int num){
    int fact;
    if(num == 1)
    	return(1);
    else if(num > 1){
        fact = num * factorial(num - 1);
        return(fact);
    }
}