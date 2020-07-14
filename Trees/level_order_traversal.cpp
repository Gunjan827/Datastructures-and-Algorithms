/* Level Order Traversal in tree using queue */

#include <iostream>
#include <queue>
using namespace std;

struct NODE
{
	int data;
	struct NODE *left, *right;
	NODE (int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    }
};

void func( struct NODE *root){
	queue <NODE* > q;
	if( root == NULL){
		return;
	}

	q.push(root);
	while(q.empty() == false){
	    struct NODE* node = q.front();

	    cout<<node->data;
	    if(node->left != NULL)
		    q.push(node->left);
	    if(node->right != NULL)
		    q.push(node->right);

	    q.pop();
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
  
    cout << "Level Order traversal of binary tree is \n"; 
    func(root); 
    return 0; 
} 