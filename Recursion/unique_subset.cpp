/*    Given an array of strings that might contain duplicates, return all possible subsets.

Note:

        Elements in a subset must be in non-descending order.
        The solution set must not contain duplicate subsets.
        The subsets must be sorted lexicographically.
        */




#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>


using namespace std;


void func(string &ip, string op, vector<string> &v){

	
	if( ip.length() == 0){
		
		v.push_back(op);
		return ;
	}
	 string op1 = op;
	 string op2 = op;
	 op2.push_back(ip[0]);
	 ip.erase(ip.begin()+0);
	
	 func(ip, op1, v);
	 func(ip, op2, v);
	 return ;
}

int main(){
	string ip, op;
	cout<<"Enter the string\n";
	cin>>ip;

	op = "";
	vector <string> v;
	func(ip, op, v);

	for(int i = 0 ; i < v.size() ; ++i){
		cout<<v[i]<<"\n";
	}
	

	
	return 0;
} 