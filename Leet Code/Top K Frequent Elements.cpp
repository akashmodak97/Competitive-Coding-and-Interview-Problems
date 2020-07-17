/* Leet Code */
/* Title - Top K Frequent Elements */
/* Created By - Akash Modak */
/* Date - 17/7/2020 */

// Given a non-empty array of integers, return the k most frequent elements.

// Example 1:

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]
// Example 2:

// Input: nums = [1], k = 1
// Output: [1]
// Note:

// You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
// Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
// It's guaranteed that the answer is unique, in other words the set of the top k frequent elements is unique.
// You can return the answer in any order.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m,n;
        for(auto x: nums){
            m[x]++;
        }
        vector<int> v;
        priority_queue<pair<int,int>> j;
        
        for(auto x: m){
            j.push({x.second,x.first});
        }
        while(k--){
            v.push_back(j.top().second);
            j.pop();
        }
        return v;
    }
};