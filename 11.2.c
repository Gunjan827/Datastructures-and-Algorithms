/*Program to calculate roots of quadratic equation using poiters*/
#include <stdio.h>
#include <math.h>
float *root(float *p);
int main()
{
	float a[3], *ptr1, *ptr2;
	ptr1 = &a[0];
	printf("Enter the coefficients\n");
	for(; ptr1 <= &a[2] ; ptr1++)
	{
		scanf("%f", ptr1);
	}
	printf("The quadratic equation is : %fx^2 + (%fx) + (%f)\n",*--ptr1, *--ptr1, *--ptr1 );

	ptr2 = root(&a[0]);
       
	return 0;
}

float *root(float *p1){
	float arr[2], *p2;
	p2 = &arr[0];
	printf("%f , %f , %f\n",*p1 , *(p1 + 1), *(p1 + 2)  );
	float discriminant = (*(p1 + 1) *  *(p1 + 1)) - 4 * (*p1)*(*(p1 + 2)) ;
	printf("%f\n", discriminant );
	if( discriminant == 0){
		printf("Equal Roots\n");
		*p2 = (-(*(p1 + 1))) / (2*(*p1)) ;
		*(p2 + 1) = *p2;
		printf("%f %f\n",*p2 , *(p2 + 1));
	}
	else if(discriminant > 0)
    {
    	printf("Real Roots\n");
        *p2 = (-(*(p1 + 1)) + sqrt(discriminant))/(2*(*p1));
        *(p2 + 1) = (-(*(p1 + 1)) - sqrt(discriminant))/(2*(*p1));
        printf("%f %f\n",*p2 , *(p2 + 1));
       }
   
   else{
   	printf("Imaginary Roots\n");

   }
}