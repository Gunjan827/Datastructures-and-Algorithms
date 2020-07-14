/*Given a string S of lowercase aplhabets, check if it is isogram or not. An Isogram is a string in which
 no letter occurs more than once.*/

#include <iostream>
#include <unordered_set>
using namespace std;

bool isogram(string s){
	unordered_set<char> m;

	for(auto c : s){
		auto it = m.find(c);
		if( it != m.end())
			return 0;
		m.insert(c);
	}
	return 1;
}

int main(){
	string s;
	cout<<"Enter a string in lower case\n";
	cin>>s;
	cout<< isogram(s);//Returns 1 if the string is isogram else returns 0
	cout<<endl;
}

