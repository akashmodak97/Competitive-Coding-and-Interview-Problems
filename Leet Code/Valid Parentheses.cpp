/* Leet Code */
/* Title - Valid Parentheses */
/* Created By - Akash Modak */
/* Date - 16/09/2020 */

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.

class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0 )
            return true;
        if(s.length()==1)
            return false;
        stack<char> st;
        bool flag = false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
                flag = true;
            }
            else if(s[i]==')' and !st.empty()){
                if(st.top()=='('){
                    st.pop();
                }
                else{
                    flag = false;
                    break;
                }
            }
            else if(s[i]=='}' and !st.empty()){
                if(st.top()=='{')
                    st.pop();
                else{
                    flag = false;
                    break;
                }
            }
            else if(s[i]==']' and !st.empty()){
                if(st.top()=='[')
                    st.pop();
                else{
                    flag = false;
                    break;
                }
            }
            else 
                return false;
        }
        if(st.empty() and flag )
            return true;
        else 
            return false;

    }
};