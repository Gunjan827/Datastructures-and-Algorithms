/*Given a string you need to print all possible strings that can be made by placing spaces (zero or one)
  in between them. Output should be printed in sorted increasing order of strings.

Input:  str[] = "ABC"
Output: (A B C)(A BC)(AB C)(ABC)*/

#include <iostream>
#include <string>
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
	op1.push_back('_');
    op1.push_back(ip[0]);
	op2.push_back( ip[0]);
	ip.erase(ip.begin()+0);
	func(ip, op1);
	func(ip, op2);
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	string ip, op;
	cout<<"Enter the string\n";
	cin>>ip;

	op.push_back(ip[0]);
	ip.erase(ip.begin() + 0);

	func(ip, op);
}
	return 0;
}