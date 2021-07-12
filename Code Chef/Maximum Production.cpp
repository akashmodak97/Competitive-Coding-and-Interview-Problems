/* Code Chef */
/* Title - Maximum Production */
/* Created By - Akash Modak */
/* Date - 12/07/2021 */

// Chefland has 7 days in a week. Chef is very conscious about his work done during the week.

// There are two ways he can spend his energy during the week. The first way is to do x units of work every day and the second way is to do y (>x) units of work for the first d (<7) days and to do z (<x) units of work thereafter since he will get tired of working more in the initial few days.

// Find the maximum amount of work he can do during the week if he is free to choose either of the two strategies.

// Input
// The first line contains an integer T, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, four integers d, x, y, z.
// Output
// For each testcase, output in a single line the answer to the problem.

// Sample Input
// 3
// 1 2 3 1
// 6 2 3 1
// 1 2 8 1
// Sample Output
// 14
// 19
// 14



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
	    int d,x,y,z;
	    cin>>d>>x>>y>>z;
	    ll for_x = 7*x;
	    ll for_other = (d*y)+((7-d)*z);
	    if(for_x>for_other){
	        cout<<for_x<<"\n";
	    }
	    else{
	        cout<<for_other<<"\n";
	    }
	}
	return 0;
}
