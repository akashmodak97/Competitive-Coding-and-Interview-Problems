/* Leet Code */
/* Title - N-Queens */
/* Created By - Akash Modak */
/* Date - 08/06/2023 */

// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

 

// Example 1:


// Input: n = 4
// Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
// Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
// Example 2:

// Input: n = 1
// Output: [["Q"]]

class Solution {
public:
    bool canPlace(vector<string> &r, int n, int i, int j){
        for(int x=0;x<i;x++){
            if(r[x][j]=='Q') return false;
        }
        int x=i,y=j;
        while(x>=0 and y>=0){
            if(r[x][y]=='Q') return false;
            x--,y--;
        }
        x=i,y=j;
        while(x>=0 and y<n){
            if(r[x][y]=='Q') return false;
            x--,y++;
        }
        return true;
    }
    bool nQueen(vector<vector<string>> &res, vector<string> &r, int n, int i){
        if(i==n){
            res.push_back(r);
            // intentionally making it false to generate all the cases
            return false;
        }
        for(int j=0;j<n;j++){
            bool place=canPlace(r,n,i,j);
            if(place){
                r[i][j]='Q';
                bool success=nQueen(res,r,n,i+1);
                if(success) return true;
                r[i][j]='.';
            }
        }
        return false;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> r;
        string str;
        for(int i=1;i<=n;i++)str+='.';
        for(int i=1;i<=n;i++)r.push_back(str);
        nQueen(res,r,n,0);
        return res;
    }
};
