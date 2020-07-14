#include <iostream>
#include <unordered_map>


using namespace std;
//#define INT_MAX 2147483647;

string printMinIndexChar(string, string);

// Driver program to test above
int main()
{
	string str;
	string patt;
	cout<<"Enter first string :";
	cin>>str; 
	cout<<"Enter second string :";
	cin>>patt;
	cout << printMinIndexChar(str, patt) << endl;
	return 0;
}// } Driver Code Ends





// function to find the minimum index character
// str: string given in the input
// patt: given pattern
string printMinIndexChar(string str, string patt)
{
	unordered_map<char, int> m;
	int min_index = str.length();
	for (int i = 0; i < str.size() ; ++i)
	{
		if(m.find(str[i]) == m.end())
			m[str[i]] = i;
	}

	for (int i = 0; i < patt.size(); ++i)
	{
		if(m.find(patt[i]) != m.end() && m[patt[i]] < min_index)
			min_index = m[patt[i]];
	}
	if (min_index != str.length())
	{
		return string(1 , str[min_index]);
	}
	else
		return "$";
}
