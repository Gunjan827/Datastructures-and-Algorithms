/*This program is on traversal of linked list*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

void display(node *head);

int main()
{
    struct node *first = NULL , *second  = NULL, *third = NULL;

    first = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof( node));

    first -> data = 1;
    first -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    display(first);	 
	return 0;
}

void display(node *head){
	node* current;
	current = head;

	while(current != NULL){
		printf("%d\n", current->data );
		current = current->next;
	}
}