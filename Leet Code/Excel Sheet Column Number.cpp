/* Leet Code */
/* Title - Excel Sheet Column Number */
/* Created By - Akash Modak */
/* Date - 10/8/2020 */

// Given a column title as appear in an Excel sheet, return its corresponding column number.

// For example:

//     A -> 1
//     B -> 2
//     C -> 3
//     ...
//     Z -> 26
//     AA -> 27
//     AB -> 28 
//     ...
// Example 1:

// Input: "A"
// Output: 1
// Example 2:

// Input: "AB"
// Output: 28
// Example 3:

// Input: "ZY"
// Output: 701
 

// Constraints:

// 1 <= s.length <= 7
// s consists only of uppercase English letters.
// s is between "A" and "FXSHRXW".

class Solution {
public:
    int titleToNumber(string s) {
        
        int cell = 0;
        int n = s.length()-1;
        for(int i=0;s[i]!='\0';i++){
            int temp = s[i] - 'A' + 1;
            cell += pow(26,n) * temp;
            n--;
        }
        return cell;
    }
};