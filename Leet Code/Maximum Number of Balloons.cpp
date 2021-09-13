/* Leet Code */
/* Title - Maximum Number of Balloons */
/* Created By - Akash Modak */
/* Date - 13/09/2021 */


// Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

// You can use each character in text at most once. Return the maximum number of instances that can be formed.

 

// Example 1:



// Input: text = "nlaebolko"
// Output: 1
// Example 2:



// Input: text = "loonbalxballpoon"
// Output: 2
// Example 3:

// Input: text = "leetcode"
// Output: 0


class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> m;
        
        int num = 0;
        
        for(int i=0;i<text.length();i++){
            if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n'){
                m[text[i]]++;
            }
        }
        num = m['b'];
        num = min(num, m['a']);
        num = min(num, m['l']/2);
        num = min(num, m['o']/2);
        num = min(num, m['n']);
        
        return num; 
    }
};