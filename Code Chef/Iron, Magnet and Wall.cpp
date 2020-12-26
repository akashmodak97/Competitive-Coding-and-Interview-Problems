/* Code Chef */
/* Title - Iron, Magnet and Wall */
/* Created By - Akash Modak */
/* Date - 26/12/2020 */

// Chef loves to play with iron (Fe) and magnets (Ma). He took a row of N cells (numbered 1 through N) and placed some objects in some of these cells. You are given a string S with length N describing them; for each valid i, the i-th character of S is one of the following:

// 'I' if the i-th cell contains a piece of iron
// 'M' if the i-th cell contains a magnet
// '_' if the i-th cell is empty
// ':' if the i-th cell contains a conducting sheet
// 'X' if the i-th cell is blocked
// If there is a magnet in a cell i and iron in a cell j, the attraction power between these cells is Pi,j=K+1−|j−i|−Si,j, where Si,j is the number of cells containing sheets between cells i and j. This magnet can only attract this iron if Pi,j>0 and there are no blocked cells between the cells i and j.

// Chef wants to choose some magnets (possibly none) and to each of these magnets, assign a piece of iron which this magnet should attract. Each piece of iron may only be attracted by at most one magnet and only if the attraction power between them is positive and there are no blocked cells between them. Find the maximum number of magnets Chef can choose.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains two space-separated integers N and K.
// The second line contains a single string S with length N.
// Output
// For each test case, print a single line containing one integer ― the maximum number of magnets that can attract iron.

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
	fast;
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int i,j=0,m=0,p=k+1,l,r,count=0;
	    queue<int> mag,iron;
	    
	    for(i=0;i<n;i++){
	        if(s[i]=='M')
	        mag.push(i);
	        if(s[i]=='I')
	        iron.push(i);
	        if(s[i]=='X' || i==n-1){
	            int l,r,sheet=0,q;
	            
	            while(!mag.empty() && !iron.empty()){
	                sheet=0;
	                l = min(mag.front(),iron.front());
	                r = max(mag.front(),iron.front());
	                
	                for(q=l;q<=r;q++){
	                    if(s[q]==':')
	                    sheet++;
	                }
	                if((p-abs(l-r)-sheet)>0){
	                    count++;
	                    mag.pop();
	                    iron.pop();
	                }
	                else if(mag.front()<iron.front()){
	                    mag.pop();
	                }
	                else{
	                    iron.pop();
	                }
	            }
	            while(!mag.empty())
	            mag.pop();
	            while(!iron.empty())
	            iron.pop();
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
