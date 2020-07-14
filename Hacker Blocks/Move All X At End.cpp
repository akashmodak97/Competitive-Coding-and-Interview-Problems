/* Hacker Blocks */
/* Title - Move All X At End */
/* Created By - Akash Modak */
/* Date - 14/07/2020 */

// Take as input str, a string. Write a recursive function which moves all ‘x’ from the string to its end.
// E.g. for “abexexdexed” return “abeedeedxxx”.
// Print the value returned

// Input Format
// Single line input containing a string

// Constraints
// Length of string <= 1000

// Output Format
// Single line displaying the string with all x's moved at the end

// Sample Input
// axbxc
// Sample Output
// abcxx
// Explanation
// All x's are moved to the end of string while the order of remaining characters remain the same.

#include <bits/stdc++.h>
using namespace std;
void moveatend(char *inp, int i, int l)
{
    if(i>=l){
        return;
    } 
    char x=inp[i];
    if(x!='x'){
        cout<<x;
    }
    moveatend(inp,i+1,l);
    if(x=='x'){
        cout<<x;
    }
    return;
}
int main() {
    char inp[10001];
    cin>>inp;
    int l = strlen(inp);
    moveatend(inp,0,l);
    return 0;
}
