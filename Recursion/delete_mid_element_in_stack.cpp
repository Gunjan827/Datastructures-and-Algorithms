/*This program deletes middle element in the stack using recursion*/

#include <iostream>
#include <stack>

using namespace std;

void delElement(stack <int> &s, int size, int count){
	if(s.size() == 0  )
		return;
    int k; 
	if(size == count || k == (size/2)+1){
		s.pop();
		return;
	}

	int x = s.top();
	s.pop();
    cout<<" size:"<<s.size()<<" count:"<<count<<endl; 
	delElement(s, size, count+1);
	s.push(x);
	return;
}

int main(){
	int size, num;
	stack <int> s;
	cout<<"Enter the number of elements\n";
	cin>>size;
	cout<<"Enter the elements\n";
	for (int i = 0; i < size; ++i)
	{
		cin>>num;
		s.push(num);
	}
    int curr = 0;
	delElement(s, size, curr);

	while (!s.empty()) 
  {  
    cout << s.top() << " "; 
    s.pop();
  }
	cout<<endl;
	return 0;
}