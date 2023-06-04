/* Leet Code */
/* Title - Maximum Ice Cream Bars */
/* Created By - Akash Modak */
/* Date - 04/06/2023 */

// It is a sweltering summer day, and a boy wants to buy some ice cream bars.

// At the store, there are n ice cream bars. You are given an array costs of length n, where costs[i] is the price of the ith ice cream bar in coins. The boy initially has coins coins to spend, and he wants to buy as many ice cream bars as possible. 

// Note: The boy can buy the ice cream bars in any order.

// Return the maximum number of ice cream bars the boy can buy with coins coins.

// You must solve the problem by counting sort.

 

// Example 1:

// Input: costs = [1,3,2,4,1], coins = 7
// Output: 4
// Explanation: The boy can buy ice cream bars at indices 0,1,2,4 for a total price of 1 + 3 + 2 + 1 = 7.
// Example 2:

// Input: costs = [10,6,8,7,7,8], coins = 5
// Output: 0
// Explanation: The boy cannot afford any of the ice cream bars.
// Example 3:

// Input: costs = [1,6,3,1,2,5], coins = 20
// Output: 6
// Explanation: The boy can buy all the ice cream bars for a total price of 1 + 6 + 3 + 1 + 2 + 5 = 18.

class Solution {
public:
    int maxIceCream(vector<int>& nums, int coins) {
        int maxVal=INT_MIN;
        for(int i=0;i<nums.size();i++)
            maxVal=max(maxVal,nums[i]);
        vector<int> count(maxVal+1,0);
        for(int i=0;i<nums.size();i++)
            count[nums[i]]++;
        int i=0,total=0;
        while(i<count.size()){
            if(coins-i>=0){
                while(coins-i>=0 and count[i]>0){
                    total++;
                    coins-=i;
                    count[i]--;
                }
                i++;
                if(coins==0) return total;
            }else i++;
        }
        return total;
    }
};
