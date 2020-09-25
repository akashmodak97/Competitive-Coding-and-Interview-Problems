/* Leet Code */
/* Title - Generate Parentheses */
/* Created By - Akash Modak */
/* Date - 26/09/2020 */

// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

// For example, given n = 3, a solution set is:

// [
//   "((()))",
//   "(()())",
//   "(())()",
//   "()(())",
//   "()()()"
// ]


class Solution {
public:
    vector<string> s;
    void generate(char *str,int idx,int n,int open, int close){
        if(idx==2*n){
            str[idx]='\0';
            s.push_back(str);
            return ;
        }
        if(open<n){
            str[idx]='(';
            
            generate(str,idx+1,n,open+1,close);
        }
        if(close<open){
            str[idx] = ')';
            generate(str,idx+1,n,open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        if(n==0){
            return s;
        }
        char str[10000000];
        generate(str,0,n,0,0);
        return s;
    }
};