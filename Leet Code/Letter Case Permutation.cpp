/* Leet Code */
/* Title - Letter Case Permutation */
/* Created By - Akash Modak */
/* Date - 07/06/2023 */

// Given a string s, you can transform every letter individually to be lowercase or uppercase to create another string.

// Return a list of all possible strings we could create. Return the output in any order.

 

// Example 1:

// Input: s = "a1b2"
// Output: ["a1b2","a1B2","A1b2","A1B2"]
// Example 2:

// Input: s = "3z4"
// Output: ["3z4","3Z4"]

class Solution {
public:
    void perm(vector<string> &res, string s, int i){
        if(i==s.length()){
            res.push_back(s);
            return;
        }else if(isalpha(s[i])){
            s[i]=tolower(s[i]);
            perm(res,s,i+1);
            s[i]=toupper(s[i]);
            perm(res,s,i+1);
        }else{
            perm(res,s,i+1);
        }

    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        perm(res,s,0);
        return res;
    }
};
