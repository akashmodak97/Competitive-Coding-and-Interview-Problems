/* Leet Code */
/* Title - Combination Sum */
/* Created By - Akash Modak */
/* Date - 26/09/2020 */

// Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

// The same repeated number may be chosen from candidates unlimited number of times.

// Note:

// All numbers (including target) will be positive integers.
// The solution set must not contain duplicate combinations.
// Example 1:

// Input: candidates = [2,3,6,7], target = 7,
// A solution set is:
// [
//   [7],
//   [2,2,3]
// ]
// Example 2:

// Input: candidates = [2,3,5], target = 8,
// A solution set is:
// [
//   [2,2,2,2],
//   [2,3,3],
//   [3,5]
// ]

class Solution {
public:
    vector<vector<int> > res;
    int i=0;
    void generate(vector<int>& out,vector<int> a,int start,int target,int sum){
    
        if(sum==target){
            res.push_back(out);
            return ;
        }

       
        for(int i=start;i<a.size();i++){
            sum+=a[i];
            if(sum>target)
                return;
            out.push_back(a[i]);
            generate(out,a,i,target,sum);
            out.pop_back();
            sum-=a[i];
            
        }
        
      
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if(candidates.size()==0)
            return res;
        sort(candidates.begin(),candidates.end());
        vector<int> out;
        generate(out,candidates,0,target,0);
        return res;
    }
};