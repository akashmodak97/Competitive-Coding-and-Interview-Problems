/* Leet Codde */
/* Title - Container With Most Water */

// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

// Note: You may not slant the container and n is at least 2.
// Example:

// Input: [1,8,6,2,5,4,8,3,7]
// Output: 49

class Solution {
public:
    int maxArea(vector<int>& height) {
        int sum = 0;
        int i = 0;
        int j = height.size() - 1;
        int current = 0;
        while(i<j){
            current = min(height[i],height[j])*(j-i);
            sum = max(sum,current);
            if(height[i]<height[j])
                i++;
            else 
                j--;
           
        }
        return sum;
        
    }
};