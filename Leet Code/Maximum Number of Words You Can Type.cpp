/* Leet Code */
/* Title - Maximum Number of Words You Can Type */
/* Created By - Akash Modak */
/* Date - 03/05/2023 */

// There is a malfunctioning keyboard where some letter keys do not work. All other keys on the keyboard work properly.

// Given a string text of words separated by a single space (no leading or trailing spaces) and a string brokenLetters of all distinct letter keys that are broken, return the number of words in text you can fully type using this keyboard.

 

// Example 1:

// Input: text = "hello world", brokenLetters = "ad"
// Output: 1
// Explanation: We cannot type "world" because the 'd' key is broken.
// Example 2:

// Input: text = "leet code", brokenLetters = "lt"
// Output: 1
// Explanation: We cannot type "leet" because the 'l' and 't' keys are broken.
// Example 3:

// Input: text = "leet code", brokenLetters = "e"
// Output: 0
// Explanation: We cannot type either word because the 'e' key is broken.

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        bool alpha[26] = {};
        bool flag = false;
        for(int i=0;i<brokenLetters.length();i++) {
            alpha[brokenLetters[i]-'a'] = 1;
        }
        for(int i=0;i<text.length();i++) {
            if(text[i] == ' ') {
                if(!flag) {
                    count++;
                }
                flag = false;
                continue;
            }
            if(!flag && alpha[text[i]-'a'])
                flag = true;
        }
        if(!flag) {
            count++;
        }
        return count;
    }
};
