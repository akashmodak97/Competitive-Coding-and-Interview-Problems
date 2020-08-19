/* Code Chef */
/* Title - Smallest KMP  */
/* Created By - Akash Modak */
/* Date - 20/8/2020 */

// Chef has a string S. He also has another string P, called pattern. He wants to find the pattern in S, but that might be impossible. Therefore, he is willing to reorder the characters of S in such a way that P occurs in the resulting string (an anagram of S) as a substring.

// Since this problem was too hard for Chef, he decided to ask you, his genius friend, for help. Can you find the lexicographically smallest anagram of S that contains P as substring?

// Note: A string B is a substring of a string A if B can be obtained from A by deleting several (possibly none or all) characters from the beginning and several (possibly none or all) characters from the end.

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main() {
	// your code goes here
	fast;
	int t;
	cin>>t;
	while(t--){
	    string s,p,res1="",res2="";
	    cin>>s>>p;
	    map<char,int> m1,m2;
	    for(int i=0;i<s.length();i++){
	        m1[s[i]]++;
	        m2[s[i]]++;
	    }
	    for(int i=0;i<p.length();i++){
	        m1[p[i]]--;
	        m2[p[i]]--;
	    }
	    map<char,int>::iterator x,y;
	    for(x=m1.begin();x!=m1.end();x++){
	         if(x->first<=p[0]){
	        while(x->second){
	       
	        res1+=x->first;
	     
	        x->second--;
	        }
	         }
	        else
	        break;
	   }
	    for(y=m2.begin();y!=m2.end();y++){
	         if(y->first<p[0]){
	        while(y->second){
	       
	        res2+=y->first;
	        
	        y->second--;
	        }
	       }
	        else
	        break;
	   }
	    for(int i=0;i<p.length();i++){
	        res1+=p[i];
	        res2+=p[i];
	    }
	    for(;x!=m1.end();x++){
	        while(x->second){
	            res1+=x->first;
	            x->second--;
	        }
	    }
	    for(;y!=m2.end();y++){
	        while(y->second){
	            res2+=y->first;
	            y->second--;
	        }
	    }
	    if(res1<res2)
	    cout<<res1;
	    else
	    cout<<res2;
	    cout<<endl;
	}
	return 0;
}
