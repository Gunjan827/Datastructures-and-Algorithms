/*Sorting a Stack using Recursion*/

#include <iostream>
#include <vector>
using namespace std;

void insert( vector <int> &v, int temp){
	if(v.size() == 0 || v.at(v.size()-1) <= temp){
		v.push_back(temp);
		return;
	}

	int val = v.at(v.size()-1);
	v.pop_back();
	insert(v, temp);
	v.push_back(val);
	return;
}


void sort(vector <int> &v){
	
	if(v.size() == 0){
		return;
	}

	int temp = v.at(v.size()-1 );

	v.pop_back();
	
	sort(v);
	insert(v, temp);
	return;
} 


int main(){
	vector <int> v;
	cout<<"Enter the size of vector\n";
    int size, num;
	cin>>size;
	for (int i = 0; i < size; ++i)
	{
		cin>>num;
		v.push_back(num);
	}
	
	sort(v);
	for (int i = 0; i < size; ++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;

}