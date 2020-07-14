#include <iostream>
#include <stack>
using namespace std;

struct NODE{
	int data;
	struct NODE* left;
	struct NODE* right;
	NODE (int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    }
};


void inorder(struct NODE* root){
	stack<NODE* > s;
	NODE* current = root;
	
	while(s.empty() == false){
		while(current != NULL){
			s.push(current);
			current = current->left;
		}
		current = s.top();
		s.pop();
		cout<<current->data<< " ";
		current = current->right;
	}
	

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
    struct NODE *root = new NODE(1); 
    root->left        = new NODE(2); 
    root->right       = new NODE(3); 
    root->left->left  = new NODE(4); 
    root->left->right = new NODE(5); 
  
    inorder(root); 
    return 0; 
} 