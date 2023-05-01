/* Leet Code */
/* Title - Sender With Largest Word Count */
/* Created By - Akash Modak */
/* Date - 01/05/2023 */

// You have a chat log of n messages. You are given two string arrays messages and senders where messages[i] is a message sent by senders[i].

// A message is list of words that are separated by a single space with no leading or trailing spaces. The word count of a sender is the total number of words sent by the sender. Note that a sender may send more than one message.

// Return the sender with the largest word count. If there is more than one sender with the largest word count, return the one with the lexicographically largest name.

// Note:

// Uppercase letters come before lowercase letters in lexicographical order.
// "Alice" and "alice" are distinct.
 

// Example 1:

// Input: messages = ["Hello userTwooo","Hi userThree","Wonderful day Alice","Nice day userThree"], senders = ["Alice","userTwo","userThree","Alice"]
// Output: "Alice"
// Explanation: Alice sends a total of 2 + 3 = 5 words.
// userTwo sends a total of 2 words.
// userThree sends a total of 3 words.
// Since Alice has the largest word count, we return "Alice".
// Example 2:

// Input: messages = ["How is leetcode for everyone","Leetcode is useful for practice"], senders = ["Bob","Charlie"]
// Output: "Charlie"
// Explanation: Bob sends a total of 5 words.
// Charlie sends a total of 5 words.
// Since there is a tie for the largest word count, we return the sender with the lexicographically larger name, Charlie.


class Solution {
public:
    static int comp(pair<string, int>& a, pair<string,int>& b) {
        if(a.second > b.second || (a.second==b.second && a.first>b.first)) {
            return 1;
        }
        return 0;
    }
    int countWords(string s) {
        int count = 1;
        for(int i=0;i<s.length();i++) {
            if(s[i]==' ') {
                count ++;
            }
        }
        return count;
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string, int> mp;
        for(int i=0;i<messages.size();i++) {
            mp[senders[i]]+=countWords(messages[i]);
        }
        vector<pair<string,int>> v(mp.begin(), mp.end());
        sort(v.begin(),v.end(), &comp);

        return v[0].first;
    }
};
