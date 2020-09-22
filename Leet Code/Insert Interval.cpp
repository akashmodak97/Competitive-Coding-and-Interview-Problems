/* Leet Code */
/* Title - Insert Interval */
/* Created By - Akash Modak */
/* Date - 22/09/2020 */

// Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

// You may assume that the intervals were initially sorted according to their start times.

 

// Example 1:

// Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
// Output: [[1,5],[6,9]]
// Example 2:

// Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
// Output: [[1,2],[3,10],[12,16]]
// Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
// Example 3:

// Input: intervals = [], newInterval = [5,7]
// Output: [[5,7]]
// Example 4:

// Input: intervals = [[1,5]], newInterval = [2,3]
// Output: [[1,5]]
// Example 5:

// Input: intervals = [[1,5]], newInterval = [2,7]
// Output: [[1,7]]
 

class Solution {
public:
    
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int> > v;
        if(intervals.size()==0){
            v.push_back(newInterval);
            return v;
        }
       int i=0, n=intervals.size();
        while(i<n && intervals[i][1]<newInterval[0])
            v.push_back(intervals[i]),i++;
        
                
        int m1=newInterval[0],m2=newInterval[1];
        
        while(i<n and intervals[i][0]<=newInterval[1]){
            m1 = min(intervals[i][0],m1);
            m2 = max(intervals[i][1],m2);
                i++;
        }
        
    
      
        v.push_back({m1,m2});
        
        while(i<n){
            v.push_back(intervals[i]);
            i++;
        }
        
       
        return v;
    }
};