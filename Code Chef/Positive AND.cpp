/* Code Chef */
/* Title - Positive AND */
/* Created By - Akash Modak */
/* Date - 26/12/2020 */

// A permutation p1,p2...pN of {1,2,...,N} is beautiful if pi&pi+1 is greater than 0 for every 1≤i<N . You are given an integer N, and your task is toconstruct a beautiful permutation of length N or determine that it's impossible.

// Note that a&b denotes the bitwise AND of a and b.

// Input:
// First line will contain T, number of testcases. Then the testcases follow. Each testcase contains a single line of input, an integer N.

// Output:
// For each test case output −1 if there is no suitable permutation of length N, otherwise output N integers in a single line which form a beautiful permutation. If there are multiple answers output any of them.



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
	    int n;
	    cin>>n;
	    int num = __builtin_popcount(n);
	    if(n==1)
	    cout<<1<<endl;
	    else if(num==1)
	    {
	        cout<<-1<<"\n";
	    }
	    else{
	        cout<<2<<" "<<3<<" "<<1;
	        int x = 4;
	        while(x<=n){
	            if(__builtin_popcount(x)==1){
	                cout<<" "<<x+1<<" "<<x;
	                x+=2;
	            }
	            else{
	                cout<<" "<<x;
	                x++;
	            }
	        }
	        cout<<"\n";
	    }
	}
	return 0;
}
