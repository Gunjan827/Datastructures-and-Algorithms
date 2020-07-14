/*
Given a string S, we can transform every letter individually to be lowercase or uppercase to create 
another string.  Return a list of all possible strings we could create.

Examples:
Input: S = "a1b2"
Output: ["a1b2", "a1B2", "A1b2", "A1B2"]

Input: S = "3z4"
Output: ["3z4", "3Z4"]

Input: S = "12345"
Output: ["12345"]*/


#include <iostream>
#include <string>
#include <cstring>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

void func(string ip, string op, vector<string> &v){
    
    if(ip.length() == 0){
    	v.push_back(op);
    	return;
    }

    if( isalpha( ip[0])){
    	string op1 = op;
    	string op2 = op;

    	op1.push_back(tolower(ip[0]));
    	op2.push_back(toupper(ip[0]));
    	ip.erase(ip.begin() + 0);
    	func(ip, op1, v);
    	func(ip, op2, v);
    }
    else{
    	string op1 = op;
    	op1.push_back(ip[0]);
    	ip.erase(ip.begin() + 0);
    	func(ip, op1, v);
    }

    return;

}


int main(){
	string ip, op;
	vector<string> v;
	cout<<"Enter the strig\n";
    cin>>ip;

    op= "";

    func(ip, op, v);

    for (int i = 0; i < v.size(); ++i)
    {
    	cout<<v[i]<<" ";
    }
    return 0;

}