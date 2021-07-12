/* Code Chef */
/* Title - Relativity */
/* Created By - Akash Modak */
/* Date - 12/07/2021 */

// In Chefland, the speed of light is c m/s, and acceleration due to gravity is g m/s2.

// Find the smallest height (in meters) from which Chef should jump such that during his journey down only under the effect of gravity and independent of any air resistance, he achieves the speed of light and verifies Einstein's theory of special relativity.

// Assume he jumps at zero velocity and at any time, his velocity (v) and depth of descent (H) are related as
// v2=2⋅g⋅H.

// Input
// The first line contains an integer T, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, two integers g, c.
// Output
// For each test case, output in a single line the answer to the problem. We can show that under the constraints, the answer is an integer.

// Sample Input
// 3
// 7 1400
// 5 1000
// 10 1000
// Sample Output
// 140000
// 100000
// 50000



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
	    int g,c;
	    cin>>g>>c;
	    ll velocity = pow(c,2);
	    ll gravity = 2*g;
	    cout<<(int)velocity/gravity<<"\n";
	}
	return 0;
}
