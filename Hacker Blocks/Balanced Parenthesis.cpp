/* Coding Blocks*/
/* Title - Balanced Parenthesis */
/* Created By - Akash Modak */
/* Date - 16/8/2020 */

// You are given a string of brackets i.e. '{', '}' , '(' , ')', '[' , ']' . You have to check whether the sequence of parenthesis is balanced or not.
// For example, "(())", "(())()" are balanced and "())(", "(()))" are not.

// Input Format
// A string of '(' , ')' , '{' , '}' and '[' , ']' .

// Constraints
// 1<=|S|<=10^5

// Output Format
// Print "Yes" if the brackets are balanced and "No" if not balanced.

// Sample Input
// (())
// Sample Output
// Yes
// Explanation
// (()) is a balanced string.

#include<bits/stdc++.h>
using namespace std;
int main() {
	stack<char> s;
	char a[100000];
	cin>>a;
	if(a[0]!='('&&a[0]!='{'&&a[0]!='['){
		cout<<"No"<<endl;
	}
	else if(strlen(a)%2){
		cout<<"No"<<endl;
	}
	else{
		s.push(a[0]);
		for(int i=1;i<strlen(a);i++){
			if(a[i]=='('||a[i]=='{'||a[i]=='[')
			s.push(a[i]);
			else if(a[i]==')' && s.top()=='('){
				s.pop();
			}
			else if(a[i]=='}' && s.top()=='{'){
				s.pop();
			}
			else if(a[i]==']' && s.top()=='['){
				s.pop();
			}
			// else{
			// 	cout<<"No"<<endl;
			// 	// flag=true;
			// 	break;
			// }
		}
		if(s.empty())
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}