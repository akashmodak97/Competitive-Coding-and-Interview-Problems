/* Hacker Rank */
/* Title - Two Strings */
/* Created By - Akash Modak */
/* Date - 04/09/2020 */

// Given two strings, determine if they share a common substring. A substring may be as small as one character.

// For example, the words "a", "and", "art" share the common substring . The words "be" and "cat" do not share a substring.

// Function Description

// Complete the function twoStrings in the editor below. It should return a string, either YES or NO based on whether the strings share a common substring.

// twoStrings has the following parameter(s):

// s1, s2: two strings to analyze .
// Input Format

// The first line contains a single integer , the number of test cases.

// The following  pairs of lines are as follows:

// The first line contains string .
// The second line contains string .
// Constraints

//  and  consist of characters in the range ascii[a-z].
// Output Format

// For each pair of strings, return YES or NO.

// Sample Input

// 2
// hello
// world
// hi
// world
// Sample Output

// YES
// NO

#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    unordered_map<char,int> m;
    for(int i=0;i<s1.length();i++){
        m[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        if(m.count(s2[i])>0)
        return "YES";
    }
    return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
