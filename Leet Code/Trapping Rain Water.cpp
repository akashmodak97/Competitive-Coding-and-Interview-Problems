/* Leet Code*/
/* Title - Trapping Rain Water */
//Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())
            return 0;
        int sum = 0;
        vector<int> left(height.size());
        vector<int> right(height.size());
        left[0] = height[0];
        right[height.size()-1] = height[height.size()-1];
        for(int i=1;i<height.size();i++)
        {
            if(left[i-1]>height[i])
                left[i] = left[i-1];
            else
                left[i] = height[i];
        }
        for(int i=height.size()-2;i>=0;i--)
        {
            if(right[i+1]>height[i])
                right[i] = right[i+1];
            else
                right[i] = height[i];
        }
        for(int i=0;i<height.size();i++)
            sum += min(left[i],right[i]) - height[i];
        return sum;
    }
};
