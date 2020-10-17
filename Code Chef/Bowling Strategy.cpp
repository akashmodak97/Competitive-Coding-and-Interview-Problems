/* Code Chef */
/* Title - Bowling Strategy */
/* Created By - Akash Modak */
/* Date - 17/10/2020 */

// In a cricket game, an over is a set of six valid deliveries of balls performed by one player ― the bowler for this over.

// Consider a cricket game with a series of N overs (numbered 1 through N) played by K players (numbered 1 through K). Each player may be the bowler for at most L overs in total, but the same player may not be the bowler for any two consecutive overs. Assign exactly one bowler to each over in such a way that these rules are satisfied or determine that no such assignment exists.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains three space-separated integers N, K and L.
// Output
// For each test case:

// If there is no valid assignment of bowlers to overs, print a single line containing the integer −1.
// Otherwise, print a single line containing N space-separated integers. For each valid i, the i-th of these integers should be the number of the player assigned as the bowler for the i-th over.
// Constraints
// 1≤T≤30
// 1≤N,K,L≤10,000
// Example Input
// 2
// 4 3 2
// 5 4 1
// Example Output
// 1 2 3 2
// -1



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
		int n,k,l;
		cin>>n>>k>>l;
		int i;
		if(n==1){
		    cout<<1<<"\n";
		    continue;
		}
		if(k*l>=n and (k>1 || l<k)){
			while(n>0){
				int i=1;
				while(n>0 and i<=k){
					cout<<i<<" ";
					i++;
					n--;
				}
				
			}
			cout<<"\n";
		}else{
			cout<<-1<<"\n";
		}
	}
	return 0;
}