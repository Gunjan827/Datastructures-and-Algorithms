/*Program to find maximum height or depth of a tree using recursion*/

#include <iostream>
using namespace std;

struct NODE{
	int data;
	struct NODE *left, *right;
	NODE (int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    }
};

int maxh(struct NODE* node){
	if (node == NULL)
		return 0;
	else{
		int lDepth = maxh(node->left);
		int rDepth = maxh(node->right);

		if(lDepth > rDepth)
			return lDepth+1;
		return rDepth+1;
	}
}

int main() 
{ 
    // Let us create binary tree shown in above diagram 
    NODE *root = new NODE(1); 
    root->left = new NODE(2); 
    root->right = new NODE(3); 
    root->left->left = new NODE(4); 
    root->left->right = new NODE(5); 
  
    cout << "Height of tree is " << maxh(root); 
    return 0; 
} 