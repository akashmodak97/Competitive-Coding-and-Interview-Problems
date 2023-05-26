/* Leet Code */
/* Title - Alphabet Board Path */
/* Created By - Akash Modak */
/* Date - 26/05/2023 */

// On an alphabet board, we start at position (0, 0), corresponding to character board[0][0].

// Here, board = ["abcde", "fghij", "klmno", "pqrst", "uvwxy", "z"], as shown in the diagram below.



// We may make the following moves:

// 'U' moves our position up one row, if the position exists on the board;
// 'D' moves our position down one row, if the position exists on the board;
// 'L' moves our position left one column, if the position exists on the board;
// 'R' moves our position right one column, if the position exists on the board;
// '!' adds the character board[r][c] at our current position (r, c) to the answer.
// (Here, the only positions that exist on the board are positions with letters on them.)

// Return a sequence of moves that makes our answer equal to target in the minimum number of moves.  You may return any path that does so.

 

// Example 1:

// Input: target = "leet"
// Output: "DDR!UURRR!!DDD!"
// Example 2:

// Input: target = "code"
// Output: "RR!DDRR!UUL!R!"

class Solution {
public:
    string alphabetBoardPath(string target) {
        string res="";
        char x;
        int prevRow=1,prevCol=1,currentRow=1,currentCol=1,i=0,temp;
        while(i<target.length()){
            temp=(target[i]-'a');
            currentRow=temp/5+1;
            currentCol=(temp%5)+1;      
            if(prevRow==6 and currentRow!=6){
                res+='U';
                prevRow--;
            }
            temp=currentCol;
            x=prevCol>currentCol?'L':'R';
            while(abs(prevCol-temp)!=0){
                res+=x;
                prevCol>currentCol?temp++:temp--;
            }
            temp=currentRow;
            x=prevRow>currentRow?'U':'D';
            while(abs(prevRow-temp)!=0){
                res+=x;
                prevRow>currentRow?temp++:temp--;
            }      
            
            res+='!';
            prevCol=currentCol;
            prevRow=currentRow;
            i++;
        }
        return res;
    }
};
