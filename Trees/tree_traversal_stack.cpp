/*Inorder, Preorder, Postorder tree traversal using stack*/

#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
	Node (int data){
		this->data = data;
		left = right = NULL;
	} 
};
void inOrder(struct Node* node){

	if(node == NULL)
		return;

	inOrder(node->left);//recursion on left child

	cout<<node->data<<" ";//print the parent or root

	inOrder(node->right);//recursion on right child
}

void preOrder(struct Node* node){

	if(node == NULL)
		return;
    
    cout<<node->data<<" ";//print the parent or root

	preOrder(node->left);//recursion on left child
	
	preOrder(node->right);//recursion on right child
} 

void postOrder(struct Node* node){

	if(node == NULL)
		return;
    
	postOrder(node->left);//recursion on left child
	
	postOrder(node->right);//recursion on right child

	cout<<node->data<<" ";//print the parent or root
} 

int main() 
{ 
  
    /* Constructed binary tree is 
              1 
            /   \ 
          2      3 
        /  \ 
      4     5 
    */
    struct Node *root = new Node(1); 
    root->left        = new Node(2); 
    root->right       = new Node(3); 
    root->left->left  = new Node(4); 
    root->left->right = new Node(5); 
     
    cout<<endl<<"PreOrder :\n";
    preOrder(root);
    cout<<endl<<"Inorder :\n";
    inOrder(root);
    cout<<endl<<"Postorder :\n";
    postOrder(root); 
    return 0; 
} 