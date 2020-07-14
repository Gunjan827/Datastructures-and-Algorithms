/************************** PRINT POWERSETS / PRINT SUBSETS ****************************/


/* The program prints all the subsets of a string.
   Example: 
   Input : "ab"
   Output : " ", "a", "b", "ab"   */


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
	op2.push_back( ip[0]);
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