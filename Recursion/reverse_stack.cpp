/*Program to reverse a stack uding recursion*/

#include <iostream>
#include <stack>

using namespace std;

void insert(stack <int> s, int temp){
	
	if(s.size() == 0){
		s.push(temp);
		return;
	}

	int ele = s.top();
	s.pop();
	insert(s, temp);
	s.push(ele);
	return;
}

void reverse(stack <int> &s){
	
	if(s.size() == 1)
		return;
    
	int temp = s.top();
	s.pop();
	reverse(s);cout<<"Hii\n";
	insert(s, temp);
	return;
}

int main(){
	stack <int> s;
	int size, num;
	cout<<"Enter number of elements\n";
	cin>>size;
	cout<<"Enter the elements\n";
	for (int i = 0; i < size; ++i)
	{
		cin>>num;
		s.push(num);
	}
	
	reverse(s);
	cout<<"BYEEEE";
    for (int i = 0; i < size; ++i)
    {
    	cout<<s.top()<< " ";
    	s.pop();
    }
	return 0;
}