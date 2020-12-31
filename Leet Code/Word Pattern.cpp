/* Leet Code */
/* Title - Word Pattern */
/* Created By - Akash Modak */
/* Date - 31/12/2020 */

// Given a pattern and a string s, find if s follows the same pattern.

// Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

 

// Example 1:

// Input: pattern = "abba", s = "dog cat cat dog"
// Output: true
// Example 2:

// Input: pattern = "abba", s = "dog cat cat fish"
// Output: false
// Example 3:

// Input: pattern = "aaaa", s = "dog cat cat dog"
// Output: false
// Example 4:

// Input: pattern = "abba", s = "dog dog dog dog"
// Output: false


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        if(pattern.length()==0 and s.length()==0)
            return true;
        if(pattern.length()==1 and s.length()==1)
            return true;
        if(pattern.length()==s.length())
            return false;
        unordered_map<char, string> m;
        unordered_map<string, char> m1;
        string word = "";
        int j=0;
        
        for(int i=0;i<s.length();i++){
            if(j==pattern.length())
                return false;
            if(s[i]==' '){
            
                
                if(m.find(pattern[j])==m.end() and m1.find(word)==m1.end()){
                    m[pattern[j]] = word;
                    m1[word] = pattern[j];
                    
                }else if(m.find(pattern[j])!=m.end()){
                    string temp = m[pattern[j]];
                    // char t = m1[word];
                    if(temp!=word){
                        return false;
                    }
                }
                else if(m1.find(word)!=m1.end()){
                    char t = m1[word];
                    
                    if(t!=pattern[j]){
                        return false;
                    }
                }
                word = "";
                j++;
            }
            else{
                word += s[i];
            }
        }
    
        if(j!=pattern.length()-1)
            return false;
        if(m.find(pattern[j])!=m.end())
        {
            string temp = m[pattern[j]];
            if(temp!=word){
                return false;
            }
        }else if(m1.find(word)!=m1.end()){
             char t = m1[word];
                    
             if(t!=pattern[j]){
                    return false;
             }
        }
        
        
        return true;
    }
};  

