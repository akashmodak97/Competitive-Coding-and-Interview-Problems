/* Leet Code */
/* Title - Merge Intervals */
/* Created By - Akash Modak */
/* Date - 26/05/2023 */

// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
// and return an array of the non-overlapping intervals that cover all the intervals in the input.


// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
// Example 2:

// Input: intervals = [[1,4],[4,5]]
// Output: [[1,5]]
// Explanation: Intervals [1,4] and [4,5] are considered overlapping.

class Solution {
public:
    static int comp(vector<int> &a, vector<int> &b){
        if(a[0]<b[0] || (a[0]==b[0] and a[1]<b[1])) return 1;
        return 0;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if(intervals.size()==1) return intervals;
        int start,last=0,second,i;
        sort(intervals.begin(), intervals.end(), &comp);
        for(i=0;i<intervals.size()-1;i++){
            if(intervals[i][1]>=intervals[i+1][0]){
                start = intervals[i][0];
                second = intervals[i][1];
                last=max(last, intervals[i][1]);
                while(i<intervals.size()-1 and second>=intervals[i+1][0]){
                    i++;
                    second=max(second,intervals[i][1]);
                    last=max(last, intervals[i][1]);
                }
                last=max(last, intervals[i][1]);
                res.push_back({start,last});
            }else{
                res.push_back({intervals[i][0],intervals[i][1]});
            }
        }
        if(i>=0 and i<intervals.size() and intervals[i][0]>intervals[i-1][1]) res.push_back({intervals[i][0], intervals[i][1]});
        return res;
    }
};
