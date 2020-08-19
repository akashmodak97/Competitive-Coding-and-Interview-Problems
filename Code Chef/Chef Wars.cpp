/* Code Chef */
/* Title - Chef Wars - Return of the Jedi  */
/* Created By - Akash Modak */
/* Date - 20/8/2020 */

// On the ice planet Hoth, Chef has run into his arch-nemesis, DarthForces. Darth has a peculiar fighting style ― he does not attack, but simply defends and lets his opponent tire himself out.

// Chef has a lightsaber which has an attack power denoted by P. He keeps hitting Darth with the lightsaber. Every time he hits, Darth's health decreases by the current attack power of the lightsaber (by P points), and afterwards, P decreases to ⌊P2⌋.

// If the attack power becomes 0 before Darth's health becomes 0 or less, Chef dies. Otherwise, Darth dies. You are given Darth's initial health H and the initial attack power P. Tell Chef if he can beat Darth or if he should escape.


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
	    long long int h,p;
	    cin>>h>>p;
	    while(h!=0 && p!=0){
	        if(h>0)h-=p;
	        else
	        h=0;
	        p/=2;
	    }
	    if(h)
	    cout<<0<<endl;
	    else
	    cout<<1<<endl;
	}
	return 0;
}
