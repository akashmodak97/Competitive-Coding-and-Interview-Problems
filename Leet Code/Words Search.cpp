/* Leet Code */
/* Title - Words Search */
/* Created By - Akash Modak */
/* Date - 22/7/2020 */

// Given a 2D board and a word, find if the word exists in the grid.

// The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

// Example:

// board =
// [
//   ['A','B','C','E'],
//   ['S','F','C','S'],
//   ['A','D','E','E']
// ]

// Given word = "ABCCED", return true.
// Given word = "SEE", return true.
// Given word = "ABCB", return false.
 

// Constraints:

// board and word consists only of lowercase and uppercase English letters.
// 1 <= board.length <= 200
// 1 <= board[i].length <= 200
// 1 <= word.length <= 10^3

class Solution {
public:
    bool backtrack(vector<vector<char>>& board,string word,int i,int j,int ind){
        if(ind==word.size())
            return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size())
            return false;
        if(word[ind]!=board[i][j])
            return false;
        char temp = board[i][j];
        board[i][j]='*';
        if(backtrack(board,word,i+1,j,ind+1) || backtrack(board,word,i-1,j,ind+1) || backtrack(board,word,i,j+1,ind+1) || backtrack(board,word,i,j-1,ind+1))
            return true;
        board[i][j]=temp;
        
        return false ;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0])
                {
                    if(backtrack(board,word,i,j,0))
                        return true;
                }
            }
        }
        return false;
    }
};