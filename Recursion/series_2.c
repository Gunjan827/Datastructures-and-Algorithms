/*Program in C to print first 50 natural numbers using recursion.*/
#include <stdio.h>
int func(int i);

int main(){
	int i = 50;
	printf("the first 50 numbers are:\n");
	func(i);
	printf("\n");
	return 0;
}

int func(int i){
	if(i < 1){
		return 0;
	}
	else{
		
	    func(i-1);
	    printf("%d\t", i);
	    return 0;
	}
}