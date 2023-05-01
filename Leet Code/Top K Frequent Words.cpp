/* Leet Code */
/* Title - Top K Frequent Words */
/* Created By - Akash Modak */
/* Date - 01/05/2023 */

// Given an array of strings words and an integer k, return the k most frequent strings.

// Return the answer sorted by the frequency from highest to lowest. Sort the words with the same frequency by their lexicographical order.

 

// Example 1:

// Input: words = ["i","love","leetcode","i","love","coding"], k = 2
// Output: ["i","love"]
// Explanation: "i" and "love" are the two most frequent words.
// Note that "i" comes before "love" due to a lower alphabetical order.
// Example 2:

// Input: words = ["the","day","is","sunny","the","the","the","sunny","is","is"], k = 4
// Output: ["the","is","sunny","day"]
// Explanation: "the", "is", "sunny" and "day" are the four most frequent words, with the number of occurrence being 4, 3, 2 and 1 respectively.

class Solution {
public:
    static int comp(pair<string,int>& a, pair<string,int>& b) {
        if(a.second>b.second || (a.second==b.second && a.first<b.first)) {
            return 1;
        }
        return 0;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        vector<string> res;
        for(int i=0;i<words.size();i++) {
            mp[words[i]]++;
        }
        vector<pair<string,int>> temp(mp.begin(), mp.end());
        sort(temp.begin(), temp.end(), &comp);
        for(auto x: temp) {
            res.push_back(x.first);
            if(--k == 0)
                break;
        }
        return res;
    }
};
