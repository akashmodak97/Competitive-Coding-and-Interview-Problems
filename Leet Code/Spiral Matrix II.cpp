/* Leet Code */
/* Title - Spiral Matrix II*/
// Given a positive integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

// Example:

// Input: 3
// Output:
// [
//  [ 1, 2, 3 ],
//  [ 8, 9, 4 ],
//  [ 7, 6, 5 ]
// ]

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> a(n,vector<int>(n,0));
        if(n==0)
            return a;
        else if(n==1)
        {
            a[0][0] = 1;
            return a;
        }
        else{
            int startRow = 0;
            int startCol = 0;
            int endRow = n - 1;
            int endCol = n - 1;
            int count = 1;
            int i;
            while(startRow<=endRow && startCol<=endCol){
                for(i=startCol;i<=endCol;i++)
                    a[startRow][i] = count++;
                for(i=startRow+1;i<=endRow;i++)
                    a[i][endCol] = count++;
                if(startRow<endRow){
                    for(i=endCol-1;i>startCol;i--)
                        a[endRow][i] = count++;
                }
                if(startCol<endCol){
                    for(i=endRow;i>startRow;i--)
                        a[i][startCol] = count++;
                }
                startRow++;
                endRow--;
                startCol++;
                endCol--;
            }
            return a;
        }
        
    }
};