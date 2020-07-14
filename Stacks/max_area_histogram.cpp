/*Find the largest rectangular area possible in a given histogram where the largest rectangle can be 
made of a number of contiguous bars. For simplicity, assume that all bars have same width and the width 
is 1 unit.*/

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> NSL(int hist[], int n){
	stack <int> s;
	vector<int> left;
	int flag = 0;

	for(int i = 0 ; i < n; ++i){
		if(s.empty() == true){
			left.push_back(-1);
			s.push(i);
			continue;
		}

		while(s.empty() == false){
			if(hist[s.top()] >= hist[i]){
				s.pop();
                flag = 1;
			}
			else if(hist[s.top()] < hist[i]){
                left.push_back(s.top());
                flag = 0;
                break;
			}
		}
		if(flag == 1){
			left.push_back(-1);
		}		
		s.push(i);
	}
	
	return left;
}



vector<int> NSR(int hist[], int n){
	stack <int> s;
	vector <int> right;
	int flag = 0;
    
    for (int i = n-1; i >=0 ; --i)
    {
    	if(s.empty() == true){
    		right.push_back(n);
    		s.push(i);
    		continue;
    	}
    	while(s.empty() == false){
    		if(hist[s.top()] < hist[i]){
    			right.push_back(s.top());
    			flag = 0;
    			break;
    		}
    		else if(hist[s.top()] >= hist[i]){
    			s.pop();
    			flag = 1;
    		}
    	}
    	if(flag == 1){
    		right.push_back(n);
    	}
    	s.push(i);
    }
    reverse(right.begin() , right.end());
    
	return right;
}

void MAH(vector<int> left, vector <int> right , int arr[] , int n){
	vector <int> width;
	vector<int> area;
	int x;
	for(int i = 0 ; i < left.size() ; i++){
		x = right.at(i) - left.at(i) -1;
		width.push_back(x);  
	}
	for(int i = 0 ; i < width.size() ; i++){
		x = width.at(i) * arr[i];
		area.push_back(x);  
	}
	cout<<"The Maximum area histogram is "<< *max_element(area.begin() , area.end());
}

int main()
{
	
	int n;
	vector<int> left;
	vector <int> right;
	vector <int> width;
	cout<<"Enter the size of array\n";
	cin>>n;
	int arr[n];
	cout<< "Enter the array\n";
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	left = NSL(arr , n);
	right = NSR(arr , n);
	
	MAH(left , right , arr , n);
	return 0;
}