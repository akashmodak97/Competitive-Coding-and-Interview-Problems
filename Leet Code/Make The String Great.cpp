/* Leet Code */
/* Title - Make The String Great */
/* Created By - Akash Modak */
/* Date - 11/05/2023 */

// Given a string s of lower and upper case English letters.

// A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:

// 0 <= i <= s.length - 2
// s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
// To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.

// Return the string after making it good. The answer is guaranteed to be unique under the given constraints.

// Notice that an empty string is also good.

 

// Example 1:

// Input: s = "leEeetcode"
// Output: "leetcode"
// Explanation: In the first step, either you choose i = 1 or i = 2, both will result "leEeetcode" to be reduced to "leetcode".
// Example 2:

// Input: s = "abBAcC"
// Output: ""
// Explanation: We have many possible scenarios, and all lead to the same answer. For example:
// "abBAcC" --> "aAcC" --> "cC" --> ""
// "abBAcC" --> "abBA" --> "aA" --> ""

class Solution {
public:
    string makeGood(string s) {
        string res(s.length(), '$'),result="";
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(st.empty()) {
                res[i]=s[i];
                st.push(i);
            }
            else{
                if((s[i]>='a' and s[i]<='z' and s[st.top()]+32==s[i]) || (s[i]>='A' and s[i]<='Z' and s[st.top()]-32==s[i])){
                    res[st.top()]= '$';
                    s[i]='$';
                    st.pop();
                }else {
                    res[i]=s[i];
                    st.push(i);
                }
            }
        }
        for(int i=0;i<res.length();i++){
            if(res[i]!='$')result+=res[i];
        }
        return result;
    }
};
