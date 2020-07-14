/*Reverse level order traversal of a binary tree i.e. all the nodes of last level should be printed first 
from left to right followed by second last level and so on.*/

#include <iostream>
#include <stack>
#include <list>
using namespace std;

struct NODE {
	int data;
	struct NODE *left, *right;
	NODE(int data){
		this->data = data;
		this->left = this->right = NULL;
	}
};

void func1(struct NODE* &root){
	stack< int > s;
	list<NODE*> q;

	if(root == NULL)
		return ;

	q.push_back(root);
	NODE *curr = NULL;

	while( q.size()){
		curr = q.front();
		if(curr->right)
			q.push_back(curr->right);
		if(curr->left)
			q.push_back(curr->left);
		s.push(curr->data);
		q.pop_front();
	}

	
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
}

void func2(struct NODE* &root){
	
}

int main()
{
	NODE* root = nullptr;

	root = new NODE(15);
	root->left = new NODE(10);
	root->right = new NODE(20);
	root->left->left = new NODE(8);
	root->left->right = new NODE(12);
	root->right->left = new NODE(16);
	root->right->right = new NODE(25);

    cout<<"USING STACK\n";
	func1(root);

	cout<<"USING HASHING\n";
	func2(root;)

	return 0;
}