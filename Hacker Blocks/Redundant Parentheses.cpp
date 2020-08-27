/* Hacker Blocks */
/* Title - Redundant Parentheses */
/* Created By - Akash Modak */
/* Date - 27/08/2020 */

// You are given an balanced expression. You have to find if it contains duplicate parentheses or not. A set of parentheses are duplicate if same subexpression is surrounded by multiple parenthesis.

// Input Format
// First line contains integer t as number of test cases.
// Next t lines contains one balanced expression each.

// Constraints
// 1 < t < 100
// 1< expression < 100

// Output Format
// Print "Duplicate" if the expression has any redundancy. Else print "Not Duplicates".

// Sample Input
// 2
// (((a+(b))+(c+d)))
// ((a+(b))+(c+d))
// Sample Output
// Duplicate
// Not Duplicates
// Explanation
// For 1st test case : The subexpression "a+(b)" is surrounded by two pairs of brackets.

#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int flag=1;
        string s;
        cin>>s;
        stack <int> pile;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]==')'){
                if(pile.top()=='(')
                flag=0;
                
                while(!pile.empty() && pile.top()!='(')
					pile.pop();
				if(!pile.empty()) pile.pop();	
            }
            else pile.push(s[i]);
        }
        if(!flag)
			cout<<"Duplicate"<<endl;
		else 
			cout<<"Not Duplicates"<<endl;
    
    }
}