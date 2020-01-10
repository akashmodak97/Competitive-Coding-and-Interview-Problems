/* Leet Code */
/* Title - Pallindrome Number */

//Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
//
//Example 1:
//
//Input: 121
//Output: true
//Example 2:
//
//Input: -121
//Output: false
//Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0,s;
        
        s = x;
        while(x>0)
        {
            int pop = x % 10;
             x /= 10;
            if( rev > INT_MAX / 10 || ( rev == INT_MAX / 10 && pop > 7 ) )
                return false;
            if( rev < INT_MIN / 10 || ( rev == INT_MIN/10 && pop < -8 ) )
                return false;
            rev = ( rev * 10 ) + pop;
           
         }
        if( rev == s )
            return true;
        else 
            return false;
    }
};
  
