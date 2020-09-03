/* SPOJ */
/* Title - Transform The Expression */
/* Created By - Akash Modak */
/* Date - 03/09/2020 */



// Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). Two-argument operators: +, -, *, /, ^ (priority from the lowest to the highest), brackets ( ). Operands: only letters: a,b,...,z. Assume that there is only one RPN form (no expressions like a*b*c).

// Input
// t [the number of expressions <= 100]
// expression [length <= 400]
// [other expressions]
// Text grouped in [ ] does not appear in the input file.

// Output
// The expressions in RPN form, one per line.
// Example
// Input:
// 3
// (a+(b*c))
// ((a+b)*(z+x))
// ((a+t)*((b+(a+c))^(c+d)))

// Output:
// abc*+
// ab+zx+*
// at+bac++cd+^*


#include<bits/stdc++.h>
using namespace std;
#define fast                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
	fast;
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		unordered_map<char,int> m;
		m['+'] = 0;
		m['-'] = 1;
		m['*'] = 2;
		m['/'] = 3;
		m['^'] = 4;
		string ans="";
		stack<char> s;
		for(int i=0;i<str.length();i++){
			if(str[i]>='a' && str[i]<='z')
				ans+=str[i];
			else if(str[i]=='(')
				s.push(str[i]);
			else if(str[i]==')'){
				while(s.top()!='('){
					ans+=s.top();
					s.pop();
				}
				s.pop();
			}
			else if(m[str[i]]>m[s.top()]){
				s.push(str[i]);
			}
			else {
				while(m[str[i]]<m[s.top()] and s.top()!='('){
					ans+=s.top();
					s.pop();
				}
				s.push(str[i]);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}