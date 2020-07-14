/*SEARCH IN A ROW WISE AND COLUMN WISE SORTED MATRIX:

Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it. 
Otherwise, print “Not Found”. In the given matrix, every row and column is sorted in increasing order.
 The designed algorithm should have linear time complexity.
Example :

Input : mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
              x = 29
Output : Found at (2, 1)*/



#include <iostream>
using namespace std;

void func(int arr[][4], int n, int x){
	int i = 0, j = n-1;
	while(i < n && j >= 0){
		if(arr[i][j] == x){
			cout<<"Element found at arr[" << i << "][" << j << "]";
			return;
		}
		else if(arr[i][j] > x){
			i++;
		}
		else if(arr[i][j] < x){
			j--;
		}
		
	}
	cout<<"Element not found!!!\n";
	return ;
}



//Driver code
int main() 
{ 
    int mat[4][4] = { { 10, 20, 30, 40 }, 
                      { 15, 25, 35, 45 }, 
                      { 27, 29, 37, 48 }, 
                      { 32, 33, 39, 50 } }; 
    func(mat, 4, 29); 
   
    return 0; 
}