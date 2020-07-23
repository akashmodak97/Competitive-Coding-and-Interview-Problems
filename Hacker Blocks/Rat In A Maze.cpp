/* Coding Blocks */
/* Title - Rat In A Maze */
/* Created By - Akash Modak */
/* Date - 23/7/2020 */

// You are given an N*M grid. Each cell (i,j) in the grid is either blocked, or empty. The rat can move from position (i,j), down or right on the grid.
// Initially rat is on the position (1,1). It wants to reach position (N,M). Find the rightmost path through which, rat can reach this position. A path is rightmost, if the rat is at position (i,j), it will always move to (i,j+1), if there exists a path from (i,j+1) to (N,M).

// Input Format
// First line contains 2 integers, N and M, denoting the rows and columns in the grid. Next N line contains. M characters each. An 'X' in position (i,j) denotes that the cell is blocked and ans 'O' denotes that the cell is empty.

// Constraints
// 1<=N,M<=1000 GRID(i,j)='X' or 'O'

// Output Format
// If a solution exists: Print N lines, containing M integers each. A 1 at a position (i,j) denotes that the (i,j)th cell is covered in the path and a 0 denotes that the cell is not covered in the path.
// If solution doesn't exist, just print "-1".

// Sample Input
// 5 4
// OXOO
// OOOX
// OOXO
// XOOO
// XXOO
// Sample Output
// 1 0 0 0 
// 1 1 0 0 
// 0 1 0 0 
// 0 1 1 1 
// 0 0 0 1 

#include<iostream>
using namespace std;
bool rat(char maze[1000][1000],int soln[][1000],int i,int j, int n, int m){
	if(i==n && j==m){
		soln[i][j]=1;
		for(int p=0;p<=n;p++){
			for(int q=0;q<=m;q++)
			cout<<soln[p][q]<<" ";
			cout<<endl;
		}
		return true;
	}
	if(i>n || j>m)
	return false;
	if(maze[i][j]=='X')
	return false;
	soln[i][j]=1;
	if(!soln[i][j+1]){
	bool success = rat(maze,soln,i,j+1,n,m);
	if(success)
	return true;
	}
	if(!soln[i+1][j]){
	bool success1 = rat(maze,soln,i+1,j,n,m);
	if(success1)
	return true;
	}
	soln[i][j]=0;

	return false;
}
int main() {
	int n,m;
	char maze[1000][1000];
	int soln[1000][1000] = {0};
	cin>>n>>m;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>maze[i][j];

	if(!rat(maze,soln,0,0,n-1,m-1))
	cout<<"-1";
	return 0;
}