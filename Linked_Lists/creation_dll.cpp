/***************This program demanstrates creation of dobly linked list************/

#include <iostream>
using namespace std;

typedef struct NODE_STRUCT{
	int data;
	NODE_STRUCT* prev;
	NODE_STRUCT* next;
}NODE;

void create( NODE** head_ref , int data){
    NODE* new_node = new NODE;
    new_node->data = data;
	new_node->prev = NULL;
	new_node->next = *head_ref;
	*head_ref = new_node;
	return;
}


void print_ll(NODE** head_ref){
	NODE* temp = *head_ref;
	int i=1;

	while(temp != NULL){
        cout<< "Node "<< i << "= " << (temp->data) << "\n";
        temp = temp->next;
        i++;    
	}
	return;
}

int main(){
	NODE *head = NULL;
	printf("This program demonstrates creation of doubly linked list\n");
	create(&head , 5);
	create(&head , 10);
	create(&head , 15);
	create(&head , 20);
	create(&head , 25);
    //printing the linked list
    print_ll(&head);
    return 0;


}