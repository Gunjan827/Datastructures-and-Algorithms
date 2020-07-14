/*Print all permutations of a string keeping the sequence but changing cases.

Examples:

Input : ab
Output : AB Ab ab aB*/

#include <iostream>
#include <string>
#include <cstring>
#include <iterator>
#include <algorithm>

using namespace std;

void func(string ip, string op){
	if( ip.length() == 0){
	cout<<"{"<<op<<"}"<<endl;
		return;
	}

	string op1 = op;
	string op2 = op;
	op1.push_back(ip[0]);
	op2.push_back( toupper(ip[0]));
	ip.erase(ip.begin()+0);
	func(ip, op1);
	func(ip, op2);
	return;
}

int main(){
	string ip, op;
	cout<<"Enter the string\n";
	cin>>ip;

	op = "";

	func(ip, op);
	return 0;
}