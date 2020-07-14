/*********** STACK - PUSH AND POP **************/

#include <stdio.h>
#define SIZE 20

typedef struct s{
	int top;
	int item[SIZE];
}stack;

void create (stack *S);
void push(stack *S , int data);
void pop(stack *S);void display(stack *S);
void display(stack *S);

int main(){
	stack S;
	int data, choice;

	printf("!!!! PROGRAM TO ILLUSTRATE PUSH AND POP OPERATIONS ON STACK !!!!\n\n");
	create(&S);

	do{
        	printf("#### MENU ####\n");
	        printf("1. Push item into the stack\n");
	        printf("2. Pop item from the stack\n");
	        printf("3. Display stack\n");
	        printf("4. Quit\n");
	        printf("Enter your choice :\n");
	        scanf("%d", &choice);

	        switch(choice){

	        	case 1:
	        	    printf("Enter the number to be pushed\n");
	        	    scanf("%d", &data);
	        	    push(&S , data);
	        	    printf("\nNumber of elments in the stack = %d\n", S.top);
	        	    break;

	        	case 2:
	        	    if(S.top < 0)
	        	    	printf("Stack is empty now\n");
	        	    else
	        	    	pop(&S);
	        	        break;

	        	case 3:
	        	    display(&S);
	        	    break;

	        	case 4:
	        	    printf("\n !!!!!!!!!!!! FINISH !!!!!!!!!!!!\n");
	        	    break;

	        	default:
	        	    printf("Incorrect choice\n");
	        	    break;

	        }
	    }while(choice != 4);
	return 0;
}

void create (stack *S){
	S->top = -1;
}


void push(stack *S , int data){
	if (S->top >= SIZE)
		printf("STACK IS FULL!!! DATA OVERFLOW !!!\n");
	else{
		(S->top)++;
		S->item[S->top] = data;
	}
}

void pop(stack *S){
	int data;
	data = S->item[S->top];
	(S->top)--;
	printf("%d popped from stack\n", data );
} 

void display(stack *S){
	int x;
	printf("ELements of stack are :\t");
	for( x = S->top ; x >= 0 ; x--)
		printf("%d\t", S->item[x] );
	printf("\n\n");
}