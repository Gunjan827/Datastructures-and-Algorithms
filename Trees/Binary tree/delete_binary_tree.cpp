/*Program to delete a binary tree using recursion as well as iteration. For this traversing in a
 post_order fashion is done. */

#include <iostream>
#include <queue>
using namespace std;

struct NODE{
	int data;
	struct NODE *left, *right;
	NODE(int data){
		this->data = data;
        this->left = this->right = NULL;
	}
};

void deleteR(struct NODE* &root){

	if (root == NULL)
		return ;
	 deleteR(root->left);
	 deleteR(root->right);

	 delete root;
	 root = NULL;

}



void deleteI(struct NODE* &root){
	if(root == NULL)
		return;

	queue< NODE* > q;
	q.push(root);
	NODE* front = NULL;

	while(!q.empty()){
        front = q.front();
        q.pop();

        if(front->left)
        	q.push(front->left);
        if(front->right)
        	q.push(front->right);

        delete front;
	}

	root= NULL;
}

int main()
{
	int n;
	cout<<"Enter 1 for recursion or 2 for iterative method\n";
	cin>>n;
	NODE* root = NULL;

	root = new NODE(15);
	root->left = new NODE(10);
	root->right = new NODE(20);
	root->left->left = new NODE(8);
	root->left->right = new NODE(12);
	root->right->left = new NODE(16);
	root->right->right = new NODE(25);

	// delete entire tree

	if(n == 1){
		deleteR(root);
    
	    if (root == NULL)
		    cout << "Tree Successfully Deleted\n";

	}
	if(n ==2){
		deleteI(root);

	    if (root == nullptr)
	    	cout << "Tree Successfully Deleted";
	} 
	return 0;
	
	
}