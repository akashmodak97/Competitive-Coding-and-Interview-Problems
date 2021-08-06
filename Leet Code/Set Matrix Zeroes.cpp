/* Leet Code */
/* Title - Set Matrix Zeroes */
/* Created By - Akash Modak */
/* Date - 07/08/2021 */


// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.

// You must do it in place.

// Example 1:


// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Example 2:


// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool row_is_zero = false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[0][j] = 0;
                    if(i>0)
                        matrix[i][0] = 0;
                    else
                        row_is_zero = true;
                
                    
                }
            }
            
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j] = 0;
            }
        }
        
        if(matrix[0][0]==0){
            for(int i=0;i<m;i++)
                matrix[i][0] = 0;
        }
        
        if(row_is_zero){
            for(int j=0;j<n;j++)
                matrix[0][j] = 0;
        }
       
    }
};