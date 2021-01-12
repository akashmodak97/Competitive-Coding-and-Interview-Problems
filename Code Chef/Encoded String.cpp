/* Code Chef */
/* Title - Encoded String */
/* Created By - Akash Modak */
/* Date - 12/01/2021 */

// An encoder encodes the first 16 lowercase English letters using 4 bits each. The first bit (from the left) of the code is 0 if the letter lies among the first 8 letters, else it is 1, signifying that it lies among the last 8 letters. The second bit of the code is 0 if the letter lies among the first 4 letters of those 8 letters found in the previous step, else it's 1, signifying that it lies among the last 4 letters of those 8 letters. Similarly, the third and the fourth bit each signify the half in which the letter lies.

// For example, the letter j would be encoded as :

// Among (a,b,c,d,e,f,g,h | i,j,k,l,m,n,o,p), j appears in the second half. So the first bit of its encoding is 1.
// Now, among (i,j,k,l | m,n,o,p), j appears in the first half. So the second bit of its encoding is 0.
// Now, among (i,j | k,l), j appears in the first half. So the third bit of its encoding is 0.
// Now, among (i | j), j appears in the second half. So the fourth and last bit of its encoding is 1.
// So j's encoding is 1001,

// Given a binary encoded string S, of length at most 105, decode the string. That is, the first 4 bits are the encoding of the first letter of the secret message, the next 4 bits encode the second letter, and so on. It is guaranteed that the string's length is a multiple of 4.

/* 
                       _oo0oo_ 
                      o8888888o 
                      88" . "88 
                      (| -_- |) 
                      0\  =  /0 
                    ___/`---'\___ 
                  .' \\|     |// '. 
                 / \\|||  :  |||// \ 
                / _||||| -:- |||||- \ 
               |   | \\\  -  /// |   | 
               | \_|  ''\---/''  |_/ | 
               \  .-\__  '-'  ___/-. / 
             ___'. .'  /--.--\  `. .'___ 
          ."" '<  `.___\_<|>_/___.' >' "". 
         | | :  `- \`.;`\ _ /`;.`/ - ` : | | 
         \  \ `_.   \_ __\ /__ _/   .-` /  / 
     =====`-.____`.___ \_____/___.-`___.-'===== 
                       `=---=' 
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  Akash Modak @akashmodak97  HITK Task @ Codechef/codeforces  
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


#include<bits/stdc++.h>
#define fast                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F                     first
#define S                     second
#define pb                    push_back
#define MP                    make_pair
#define REP(i,a,b)            for (int i = a; i <= b; i++)
#define FLSH                  fflush(stdout)
#define count_1(n)            __builtin_popcountll(n) 
#define max(x,y)              (x>y)?x:y 
#define min(x,y)              (x<y)?x:y 
#define mid(s,e)              (s+(e-s)/2) 
#define mini                  INT_MIN 
#define maxi		      INT_MAX

const int MOD = 1000000007; 
const int FMOD = 998244353; 
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<string,string> m;
	    m["0000"] = "a";
	    m["0001"] = "b";
	    m["0010"] = "c";
	    m["0011"] = "d";
	    m["0100"] = "e";
	    m["0101"] = "f";
	    m["0110"] = "g";
	    m["0111"] = "h";
	    m["1000"] = "i";
	    m["1001"] = "j";
	    m["1010"] = "k";
	    m["1011"] = "l";
	    m["1100"] = "m";
	    m["1101"] = "n";
	    m["1110"] = "o";
	    m["1111"] = "p";
	    string result="";
	    for(int i=0;i<n;i+=4){
	        string word = "";
	        word += s[i];
	        word += s[i+1];
	        word += s[i+2];
	        word += s[i+3];
	        // cout<<word<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<endl;
	        result += m[word];
	    }
	    cout<<result<<"\n";
	}
	return 0;
}
