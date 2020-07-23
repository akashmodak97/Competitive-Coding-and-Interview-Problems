/* Coding Blocks */
/* Title - Count N Queen */
/* Created By - Akash Modak */
/* Date - 23/7/2020 */

// You are given an empty chess board of size N*N. Find the number of ways to place N queens on the board, such that no two queens can kill each other in one move. A queen can move vertically, horizontally and diagonally.

// Input Format
// A single integer N, denoting the size of chess board.

// Constraints
// 1<=N<=11

// Output Format
// A single integer denoting the count of solutions.

// Sample Input
// 4
// Sample Output
// 2

#include<iostream>
using namespace std;
int count=0;
bool isSafe(int board[11][11],int i,int j,int n){
	for(int row=0;row<i;row++)
	if(board[row][j]==1)
	return false;
	int x=i-1;
	int y=j-1;
	while(x>=0 && y>=0){
		if(board[x][y])
		return false;
		x--;
		y--;
	}
	x=i-1;
	y=j+1;
	while(x>=0 && y<n){
		if(board[x][y])
		return false;
		x--;
		y++;
	}
	return true;
}
bool nqueen(int board[11][11],int i,int n){
	if(i==n){
		count++;
		return false;
	}
	for(int j=0;j<n;j++){
		if(isSafe(board,i,j,n)){
			board[i][j]=1;
			bool check = nqueen(board,i+1,n);
			if(check)
			return true;
			board[i][j]=0;
		}
	}
	return false;
}
int main() {
	int board[11][11]={0};
	int n;
	cin>>n;
	nqueen(board,0,n);
	cout<<count<<endl;
	return 0;
}
