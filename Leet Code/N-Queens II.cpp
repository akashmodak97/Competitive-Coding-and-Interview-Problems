/* Leet Code */
/* Title - N-Queens II */
/* Created By - Akash Modak */
/* Date - 08/06/2023 */

// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return the number of distinct solutions to the n-queens puzzle.

 

// Example 1:


// Input: n = 4
// Output: 2
// Explanation: There are two distinct solutions to the 4-queens puzzle as shown.
// Example 2:

// Input: n = 1
// Output: 1

class Solution {
public:
    bool canPlace(vector<vector<int>> board, int n, int i, int j){
        for(int x=0;x<i;x++){
            if(board[x][j]) return false;
        }
        int x=i,y=j;
        while(x>=0 and y>=0){
            if(board[x][y]) return false;
            x--,y--;
        }
        x=i,y=j;
        while(x>=0 and y<n){
            if(board[x][y]) return false;
            x--,y++;
        }
        return true;
    }
    bool nQueens(vector<vector<int>> board, int n, int i, int &total){
        if(i==n){
            total++;
            return false;
        }
        for(int j=0;j<n;j++){
            if(canPlace(board,n,i,j)){
                board[i][j]=1;
                bool success=nQueens(board,n,i+1,total);
                if(success) return true;
                board[i][j]=0;
            }
        }
        return false;
    }
    int totalNQueens(int n) {
        vector<vector<int>> board(n, vector<int>(n,0));
        int total=0;
        nQueens(board,n,0,total);
        return total;
    }
};
