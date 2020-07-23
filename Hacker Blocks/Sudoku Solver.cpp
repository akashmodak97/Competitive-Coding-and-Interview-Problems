/* Coding Blocks */
/* Title - Sudoku Solver */
/* Created By - Akash Modak */
/* Date - 23/7/2020 */

// You are given an N*N sudoku grid (N is a multiple of 3). Solve the sudoku and print the solution.
// To learn more about sudoku, go to this link Sudoku-Wikipedia.

// Input Format
// First line contains a single integer N. Next N lines contains N integers each, where jth integer int ith line denotes the value at ith row and jth column in sudoku grid. This value is 0, if the cell is empty.

// Constraints
// N=9 Solution exists for input matrix.

// Output Format
// Print N lines containing N integers each, where jth integer int ith line denotes the value at ith row and jth column in sudoku grid, such that all cells are filled.

// Sample Input
// 9
// 5 3 0 0 7 0 0 0 0 
// 6 0 0 1 9 5 0 0 0 
// 0 9 8 0 0 0 0 6 0 
// 8 0 0 0 6 0 0 0 3 
// 4 0 0 8 0 3 0 0 1 
// 7 0 0 0 2 0 0 0 6 
// 0 6 0 0 0 0 2 8 0 
// 0 0 0 4 1 9 0 0 5 
// 0 0 0 0 8 0 0 7 9 
// Sample Output
// 5 3 4 6 7 8 9 1 2 
// 6 7 2 1 9 5 3 4 8 
// 1 9 8 3 4 2 5 6 7 
// 8 5 9 7 6 1 4 2 3 
// 4 2 6 8 5 3 7 9 1 
// 7 1 3 9 2 4 8 5 6 
// 9 6 1 5 3 7 2 8 4 
// 2 8 7 4 1 9 6 3 5 
// 3 4 5 2 8 6 1 7 9 


#include<iostream>
#include<cmath>
using namespace std;
bool canPlace(int mat[0][9],int i,int j,int n,int num){
	for(int x=0;x<9;x++)
	if(mat[x][j]==num || mat[i][x]==num)
	return false;

	int rn = sqrt(n);
	int sx = (i/rn)*rn;
	int sy = (j/rn)*rn;
	for(int p=sx;p<sx+rn;p++)
	for(int q=sy;q<sy+rn;q++)
	if(mat[p][q]==num)
	return false;
	return true;
}
bool sudoku(int mat[][9],int i,int j,int n){
	if(i==n){
	for(int p=0;p<n;p++)
	{
		for(int q=0;q<n;q++)
		cout<<mat[p][q]<<" ";
		cout<<endl;
	}
	return true;
	}
	if(j==n)
	return sudoku(mat,i+1,0,n);
	if(mat[i][j]!=0)
	return sudoku(mat,i,j+1,n);
	for(int k=1;k<=n;k++){
		if(canPlace(mat,i,j,n,k)){
			mat[i][j]=k;
			bool can = sudoku(mat,i,j+1,n);
			if(can)
			return true;
		}
	}
	mat[i][j]=0;
	return false;
	
}
int main() {
	int n;
	cin>>n;
	int mat[9][9];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>mat[i][j];
	
	bool c = sudoku(mat,0,0,n);
	return 0;
}