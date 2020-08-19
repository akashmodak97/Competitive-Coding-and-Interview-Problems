/* Code Chef */
/* Title - Chef and Linear Chess  */
/* Created By - Akash Modak */
/* Date - 20/8/2020 */

// Chef wants to play a game of linear chess on a one-dimensional board ― an infinite row of squares numbered by positive integers. In this game, he has a pawn, which is initially at a square K. There are also N other people (numbered 1 through N); Chef can choose one of them to play against. For each valid i, the i-th player would play in the following way:

// Take a pawn and place it on a square Pi.
// Repeat the following move any number of times: move the pawn from its current square Pi squares forward, i.e. from a square s, this player's pawn is moved to the square s+Pi.
// If this player moves their pawn to the square with Chef's pawn, then Chef's pawn is captured and he loses the game.
// Unfortunately, Chef cannot move his pawn during the game, making him an easy target for other players. Given the starting positions of all N+1 players, find a player who can capture Chef's pawn in the smallest number of moves or determine that no player can capture his pawn.

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
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll m=INT_MAX,m1;
	    for(ll i=0; i<n;i++){
	        if(k%a[i]==0){
	            ll t = k/a[i] -1;
	            if(t<m){
	                m=t;
	                m1 = a[i];
	            }
	            
	        }
	    }
	    if(m==INT_MAX)
	    cout<<-1<<endl;
	    else
	    cout<<m1<<endl;
	}
	return 0;
}
