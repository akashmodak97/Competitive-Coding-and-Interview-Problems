/* Leet Code */
/* Title - Valid Palindrome */
/* Created By - Akash Modak */
/* Date - 31/12/2020 */

// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

// Note: For the purpose of this problem, we define empty string as valid palindrome.

// Example 1:

// Input: "A man, a plan, a canal: Panama"
// Output: true
// Example 2:

// Input: "race a car"
// Output: false


class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==0)
            return true;
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        string word = "";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ' and ((s[i]>='A' and s[i]<='Z') || (s[i]>='a' and s[i]<='z') || (s[i]>='0' and s[i]<='9')))
                word+=s[i];
        }
        // cout<<word;
        for(int i=0,j=word.length()-1;i<j;i++,j--){
            if(word[i]!=word[j])
                return false;
        }
        return true;
    }
};