/* Leet Code */
/* Title - Letter Combinations of a Phone Number */
/* Created By - Akash Modak */
/* Date - 26/09/2020 */

// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.

// A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.



// Example:

// Input: "23"
// Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
// Note:

// Although the above answer is in lexicographical order, your answer could be in any order you want.

class Solution {
public:
    string table[20] = {"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> s;
    void generate(string inp,int i,char *out,int j){
        if(inp[i]=='\0'){
            out[j] = '\0';
            s.push_back(out);
            return ;
        }
        
        int key = inp[i]-'0';
        key--;
        for(int t=0;table[key][t]!='\0';t++){
            out[j] = table[key][t];
            generate(inp,i+1,out,j+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)
            return s;
        char out[10000000];
        generate(digits,0,out,0);
        return s;
    }
};