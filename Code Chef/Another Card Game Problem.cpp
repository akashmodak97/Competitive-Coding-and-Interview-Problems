/* Code Chef */
/* Title - Another Card Game Problem  */
/* Created By - Akash Modak */
/* Date - 20/8/2020 */

// Chef is playing a card game with his friend Rick Sanchez. He recently won against Rick's grandson Morty; however, Rick is not as easy to beat. The rules of this game are as follows:

// The power of a positive integer is the sum of digits of that integer. For example, the power of 13 is 1+3=4.
// Chef and Rick receive randomly generated positive integers. For each player, let's call the integer he received final power.
// The goal of each player is to generate a positive integer such that its power (defined above) is equal to his final power.
// The player who generated the integer with fewer digits wins the game. If both have the same number of digits, then Rick cheats and wins the game.
// You are given the final power of Chef PC and the final power of Rick PR. Assuming that both players play optimally, find the winner of the game and the number of digits of the integer he generates.

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
	int t;
	cin>>t;
	while(t--){
	    int c,p;
	    cin>>c>>p;
	    int cp = ceil(c/9.0);
	    int pp = ceil(p/9.0);
	    
	    if(cp<pp)
	    cout<<0<<" "<<cp;
	    else
	    cout<<1<<" "<<pp;
	    cout<<endl;
	}
	return 0;
}
