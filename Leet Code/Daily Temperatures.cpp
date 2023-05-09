/* Leet Code */
/* Title - Daily Temperatures */
/* Created By - Akash Modak */
/* Date - 09/05/2023 */

// Given an array of integers temperatures represents the daily temperatures, 
// return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. 
// If there is no future day for which this is possible, keep answer[i] == 0 instead.

// Example 1:

// Input: temperatures = [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]
// Example 2:

// Input: temperatures = [30,40,50,60]
// Output: [1,1,1,0]
// Example 3:

// Input: temperatures = [30,60,90]
// Output: [1,1,0]

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        stack<int> s;
        for(int i=0;i<temperatures.size();i++){
            while(!s.empty() && temperatures[s.top()]<temperatures[i]){
                int top=s.top();
                res[top]=i-top;
                s.pop();
            }
            s.push(i);
        }
        return res;
    }
};
