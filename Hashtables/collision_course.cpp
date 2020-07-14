#include <iostream>
#include <cmath>
using namespace std;


void func(int C){

	int arr[C][3];
	int dist[C];
	int count = 0;
	for (int i = 0; i < C; ++i)
	{
		cin>> arr[C][0] >> arr[C][1] >> arr[C][2];
	}

	for (int i = 0; i < C; ++i)
	{
		int y = sqrt( (arr[C][0]*arr[C][0]) + (arr[C][1]*arr[C][1])) / (arr[C][2]);
		dist[i] = y;
	    
	}
	for(int i = 0; i < C ; i++)
		for( int j = i +1; j < C ; j++){
			if(dist[i] == dist[j])
                count++;
		}

	cout <<count<<endl;

}

int main(){
	int C;
	cin>>C;
	func(C);
	return 0;
}