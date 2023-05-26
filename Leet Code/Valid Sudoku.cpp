/* Leet Code */
/* Title - Valid Sudoku */
/* Created By - Akash Modak */
/* Date - 26/05/2023 */

// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
// Note:

// A Sudoku board (partially filled) could be valid but is not necessarily solvable.
// Only the filled cells need to be validated according to the mentioned rules.
 

// Example 1:


// Input: board = 
// [["5","3",".",".","7",".",".",".","."]
// ,["6",".",".","1","9","5",".",".","."]
// ,[".","9","8",".",".",".",".","6","."]
// ,["8",".",".",".","6",".",".",".","3"]
// ,["4",".",".","8",".","3",".",".","1"]
// ,["7",".",".",".","2",".",".",".","6"]
// ,[".","6",".",".",".",".","2","8","."]
// ,[".",".",".","4","1","9",".",".","5"]
// ,[".",".",".",".","8",".",".","7","9"]]
// Output: true
// Example 2:

// Input: board = 
// [["8","3",".",".","7",".",".",".","."]
// ,["6",".",".","1","9","5",".",".","."]
// ,[".","9","8",".",".",".",".","6","."]
// ,["8",".",".",".","6",".",".",".","3"]
// ,["4",".",".","8",".","3",".",".","1"]
// ,["7",".",".",".","2",".",".",".","6"]
// ,[".","6",".",".",".",".","2","8","."]
// ,[".",".",".","4","1","9",".",".","5"]
// ,[".",".",".",".","8",".",".","7","9"]]
// Output: false
// Explanation: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            unordered_set<char> s;
            for(int j=0;j<board[i].size();j++){
                //check for whole column first
                for(int k=i;k<9;k++){
                    if(board[k][j]!='.' and s.find(board[k][j])!=s.end()) return false;
                    s.insert(board[k][j]);
                }
                s.clear();
                //check for whole row
                for(int k=j;k<9;k++){
                    if(board[i][k]!='.' and s.find(board[i][k])!=s.end()) return false;
                    s.insert(board[i][k]);
                }
                s.clear();
                //check for 3x3
                if(j%3==0 and i%3==0){ // if it's a starting index of 3x3 block
                    for(int k=i;k<i+3;k++){
                        for(int l=j;l<j+3;l++){
                            if(board[k][l]!='.' and s.find(board[k][l])!=s.end()) return false;
                            s.insert(board[k][l]);
                        }
                    }
                    s.clear();
                }
            }
            
        }

        return true;
    }
};
