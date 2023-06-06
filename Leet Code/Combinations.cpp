/* Leet Code */
/* Title - Combinations */
/* Created By - Akash Modak */
/* Date - 06/06/2023 */

// Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].

// You may return the answer in any order.

 

// Example 1:

// Input: n = 4, k = 2
// Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
// Explanation: There are 4 choose 2 = 6 total combinations.
// Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.
// Example 2:

// Input: n = 1, k = 1
// Output: [[1]]
// Explanation: There is 1 choose 1 = 1 total combination.

class Solution {
public:
    void backtrack(int i, int j, int k, int n, vector<int> &temp, vector<vector<int>> & res){
        if(i==k){
            res.push_back(temp);
            return;
        }
        for(int l=j;l<=n;l++){
            temp.push_back(l);
            j++;
            backtrack(i+1,j,k,n,temp,res);
            temp.pop_back();
        }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<vector<int>> res;
        backtrack(0,1,k,n,temp,res);
        return res;
    }
};
