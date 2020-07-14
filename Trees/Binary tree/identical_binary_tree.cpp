/*Program to check if two binary trees are identical or not using recursion and iteration*/

#include <iostream>
#include <stack>
#include <utility>
using namespace std;

struct NODE{
	int data;
	struct NODE *left, *right;
	NODE(int data){
		this->data = data;
		this->left = this->right = NULL;
	}
};


int identicalR(struct NODE *x, struct NODE *y){
	if(x== NULL && y == NULL)
		return 1;
	return (x && y) && (x->data = y->data) && identicalR(x->left, y->left) && 
	identicalR(x->right, y-> right);
}

bool identicalI(struct NODE *x, struct NODE *y){
	if(x == NULL && y == NULL)
		return true;
	if(x == NULL)
		return false;
	if(y == NULL)
		return false;

    stack< pair< NODE*, NODE* > > s;
    s.push( make_pair(x, y));

    while( !s.empty()){
    	NODE* x = (s.top()).first;
    	NODE *y = (s.top()).second;
    	s.pop();

    	// if value of their root node don't match, return false
		if (x->data != y->data)
		  return false;

		// if left subtree of both x and y exists, push their addresses
		// to stack else return false if only one left child exists
		if (x->left && y->left)
		   s.push({x->left, y->left});
		else if (x->left || y->left)
		   return false;

		// if right subtree of both x and y exists, push their addresses
		// to stack else return false if only one right child exists
		if (x->right && y->right)
		   s.push({x->right, y->right});
		else if (x->right || y->right)
		   return false;
    }
    return true;
}


int main()
{
	// construct first tree
	int n;
	cout<<"Enter 1 for recursion or 2 for iterative method\n";
	cin>>n;
	NODE* x = nullptr;

	x = new NODE(15);
	x->left = new NODE(10);
	x->right = new NODE(20);
	x->left->left = new NODE(8);
	x->left->right = new NODE(12);
	x->right->left = new NODE(16);
	x->right->right = new NODE(25);

	// construct second tree
	NODE* y = nullptr;

	y = new NODE(15);
	y->left = new NODE(10);
	y->right = new NODE(20);
	y->left->left = new NODE(8);
	y->left->right = new NODE(12);
	y->right->left = new NODE(16);
	y->right->right = new NODE(25);


    if(n==1){
    	if (identicalR(x, y))
	  	    cout << "Given binary Trees are identical";
	    else
		    cout << "Given binary Trees are not identical";
    }
    if(n==2){
    	if (identicalI(x, y))
		    cout << "Given binary Trees are identical";
	    else
		    cout << "Given binary Trees are not identical";   	
    }
	

	return 0;
}