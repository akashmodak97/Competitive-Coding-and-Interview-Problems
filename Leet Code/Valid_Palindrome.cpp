/* Leet Code */
/* Title - Valid Palindrome */
/* Date - 02/10/2020 */

// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.



//Example 1:

//Input: "A man, a plan, a canal: Panama"
//Output: true

//Example 2:

//Input: "race a car"
//Output: false

//Note: For the purpose of this problem, we define empty string as valid palindrome.


class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.length()-1;
        while (i<j) {
            while (i<j && !isalnum(s[i]))   i++;
            while (i<j && !isalnum(s[j]))   j--;
            if (tolower(s[i])!=tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};