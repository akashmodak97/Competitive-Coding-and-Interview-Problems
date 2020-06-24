/* Hacker Blocks */
/* Title - Sanket And Strings */
/* Created By - Akash Modak */
/* Date - 24/6/2020 */

// Sanket has a string consisting of only 'a' and 'b' as the characters. Sanket describes perfectness of a string as the maximum length substring of equal characters. Sanket is given a number k which denotes the maximum number of characters he can change. Find the maximum perfectness he can generate by changing no more than k characters.

// Input Format
// The first line contains an integer denoting the value of K. The next line contains a string having only ‘a’ and ‘b’ as the characters.

// Constraints
// 2 ≤ N ≤ 10^6

// Output Format
// A single integer denoting the maximum perfectness achievable.

// Sample Input
// 2
// abba
// Sample Output
// 4
// Explanation
// We can swap the a's to b using the 2 swaps and obtain the string "bbbb". This would have all the b's and hence the answer 4.
// Alternatively, we can also swap the b's to make "aaaa". The final answer remains the same for both cases.

#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{
   
    int k;
    cin >> k;
    string str;
    cin >> str;
    int freq[2] = {0};
    ll n = str.length();
    ll ans = 0, left = 0;
    for (ll i = 0; i < n; i++)
    {
        char temp = str[i];
        freq[temp - 'a']++;
        if (min(freq[0], freq[1]) > k)
        {
            freq[str[left] - 'a']--;
            left++;
        }
        else 
            ans++;
    }
    cout << ans << endl;
    return 0;
}