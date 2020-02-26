/* Leet Code */
/* Title - Roman to Integer */
//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
//
//Symbol       Value
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.
//
//Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
//
//I can be placed before V (5) and X (10) to make 4 and 9. 
//X can be placed before L (50) and C (100) to make 40 and 90. 
//C can be placed before D (500) and M (1000) to make 400 and 900.
//Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.
//
//Example 1:
//
//Input: "III"
//Output: 3
//Example 2:
//
//Input: "IV"
//Output: 4
//Example 3:
//
//Input: "IX"
//Output: 9
//Example 4:
//
//Input: "LVIII"
//Output: 58
//Explanation: L = 50, V= 5, III = 3.

class Solution {
public:
    int romanToInt(string s) {
        int sum=0,val;
for(int i=0;i<s.size();i++)
{

    if(s[i]=='I')
    {
        val=1;
    }
    
    if (s[i] == 'V') 
    {
        val=5;
    } 
    if (s[i]== 'X') 
    {
        val=10;
    }
    if (s[i]== 'L') 
    {
        val=50;
    } 
    if (s[i] == 'C') 
    {
        val=100;
    } 
    if (s[i]== 'D') 
   {
        val=500;
    } 
    if (s[i]== 'M') 
   {
        val=1000;
    } 
    if (s[i]== 'I'&&s[i+1]=='V') 
   {
        val=4;
       i++;
    }
    if (s[i]== 'I'&&s[i+1]=='X') 
   {
        val=9;
       i++;
    }
    if (s[i]== 'X'&&s[i+1]=='L') 
   {
        val=40;
       i++;
    }
    if (s[i]=='X'&&s[i+1]=='C') 
   {
        val=90;
       i++;
    }
    if (s[i]== 'C'&&s[i+1]=='D') 
   {
        val=400;
       i++;
    }
        if (s[i]== 'C'&&s[i+1]=='M') 
   {
        val=900;
       i++;
    }
sum+=val;

}

return sum;
}
};
