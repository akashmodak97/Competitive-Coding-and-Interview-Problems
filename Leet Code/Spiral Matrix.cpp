/* Leet Code */
/* Title - Spiral Matrix*/
// Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

// Example 1:

// Input:
// [
//  [ 1, 2, 3 ],
//  [ 4, 5, 6 ],
//  [ 7, 8, 9 ]
// ]
// Output: [1,2,3,6,9,8,7,4,5]
// Example 2:

// Input:
// [
//   [1, 2, 3, 4],
//   [5, 6, 7, 8],
//   [9,10,11,12]
// ]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty())
            return {};
        vector<int> a;
        int startRow = 0;
        int startCol = 0;
        int endRow = matrix.size()-1;
        int endCol = matrix[0].size()-1;
        int i;
        while(startRow<=endRow && startCol<=endCol){
            for(i=startCol;i<=endCol;i++)
                a.push_back(matrix[startRow][i]);
            // startRow++;
            
            for(i=startRow+1;i<=endRow;i++)
                a.push_back(matrix[i][endCol]);
            // endCol--;
            if(startRow<endRow)
            {
                for(i=endCol-1;i>startCol;i--)
                    a.push_back(matrix[endRow][i]);
                // endRow--;
            }
            if(startCol<endCol)
            {
                for(i=endRow;i>startRow;i--)
                    a.push_back(matrix[i][startCol]);
                // startCol++;
            }
            startRow++;
            endRow--;
            startCol++;
            endCol--;
        }
        return a;
        
        
    }
};