/* Leet Code */
/* Title - Sudoku Solver */
/* Created By - Akash Modak */
/* Date - 09/06/2023 */

// Write a program to solve a Sudoku puzzle by filling the empty cells.

// A sudoku solution must satisfy all of the following rules:

// Each of the digits 1-9 must occur exactly once in each row.
// Each of the digits 1-9 must occur exactly once in each column.
// Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
// The '.' character indicates empty cells.

 

// Example 1:


// Input: board = [["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]
// Output: [["5","3","4","6","7","8","9","1","2"],["6","7","2","1","9","5","3","4","8"],["1","9","8","3","4","2","5","6","7"],["8","5","9","7","6","1","4","2","3"],["4","2","6","8","5","3","7","9","1"],["7","1","3","9","2","4","8","5","6"],["9","6","1","5","3","7","2","8","4"],["2","8","7","4","1","9","6","3","5"],["3","4","5","2","8","6","1","7","9"]]

class Solution {
public:
    bool canPlace(vector<vector<char>> board, int i, int j,int num){
        for(int k=0;k<9;k++)
            if(board[k][j]==num+'0' || board[i][k]==num+'0') return false;
        int x=(i/3)*3, y=(j/3)*3;
        for(int m=x;m<x+3;m++){
            for(int n=y;n<y+3;n++){
                if(board[m][n]==num+'0') return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>> &board, int i, int j, int n=9){
        if(i==n) return true;
        if(j==n) return solve(board,i+1,0);
        if(board[i][j]!='.') return solve(board,i,j+1);

        for(int num=1;num<=9;num++){
            if(canPlace(board,i,j,num)){
                board[i][j]=num+'0';
                bool success=solve(board,i,j+1);
                if(success) return true;
            }
        }
        board[i][j]='.';
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};
