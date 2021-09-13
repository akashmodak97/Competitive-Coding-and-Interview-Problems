/* Leet Code */
/* Title - Ransom Note */
/* Created By - Akash Modak */
/* Date - 14/09/2021 */

// Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

// Each letter in magazine can only be used once in ransomNote.

 

// Example 1:

// Input: ransomNote = "a", magazine = "b"
// Output: false
// Example 2:

// Input: ransomNote = "aa", magazine = "ab"
// Output: false
// Example 3:

// Input: ransomNote = "aa", magazine = "aab"
// Output: true

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(int i=0;i<magazine.length();i++){
            m[magazine[i]]++;
        }
        
        for(int i=0;i<ransomNote.length();i++){
            if(m.find(ransomNote[i]) == m.end()){
                return false;
            }
            else if(m[ransomNote[i]] == 0){
                return false;
            }
            m[ransomNote[i]]--;
        }
        
        return true;
    }
};