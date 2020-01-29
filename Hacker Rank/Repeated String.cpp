/*Hacker Rank*/
/*Title - Repeated String*/
//Lilah has a string, s , of lowercase English letters that she repeated infinitely many times.
//
//Given an integer, n , find and print the number of letter a's in the first n letters of Lilah's infinite string.
//
//For example, if the string s="abcac" and n=10 , the substring we consider is "abcacabcac", the first 10 characters of her infinite string. There are 4 occurrences of a in the substring.
//
//Function Description
//
//Complete the repeatedString function in the editor below. It should return an integer representing the number of occurrences of a in the prefix of length n in the infinitely repeating string.
//
//repeatedString has the following parameter(s):
//
//s: a string to repeat
//n: the number of characters to consider

long repeatedString(string s, long n) {

    long count = 0;
    int i ;
    long p = n/s.size();
    for(i=0;i<s.size();i++)
        if(s[i]=='a')
            count++;
    count *= p;
    for(i=0;i<n%s.size();i++)
        if(s[i]=='a')
            count++;
    
    return count;
}

