/*Suppose you have two pets and you love both of them very much. You go to a pet store to buy different
 articles for your pets. But you ask salesman that you will buy only those articles which are actually in 
 pair. In this store, articles are referred as integers. So you have to tell total no. of articles you 
 will buy for your pets.
 Example :
 Input
 n = 7 (size of array)
 10 10 10 20 20 10 20

 Output: 6

 Explanation:
 The pairs formed are: (10,10) (10,10) (20,20). The leftover 20 can't be paired with any other 20.
 Hence, the total articles we'll buy are 6. 
 */

#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n, k;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	map<int, int> m;
	cout<<"Enter the array:\n";
	for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			m[arr[i]]++ ;

		}
	int count = 0;
	for (auto i = m.begin(); i != m.end() ; ++i)
	{
		if((i->second) > 1)
			count += (i->second)/2;
	}
	cout<<"Total number of article that will be bought are: "<<count*2;
	return 0;
}