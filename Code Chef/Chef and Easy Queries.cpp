/* Code Chef */
/* Title - Chef and Easy Queries */
/* Created By - Akash Modak */
/* Date - 17/10/2020 */


// Chef published a blog post, and is now receiving many queries about it. On day i, he receives Qi queries. But Chef can answer at most k queries in a single day.

// Chef always answers the maximum number of questions that he can on any given day (note however that this cannot be more than k). The remaining questions (if any) will be carried over to the next day.

// Fortunately, after n days, the queries have stopped. Chef would like to know the first day during which he has some free time, i.e. the first day when he answered less than k questions.

// Input:
// First line will contain T, the number of testcases. Then the testcases follow.
// The first line of each testcase contains two space separated integers n and k.
// The second line of each testcase contains n space separated integers, namely Q1,Q2,...Qn.
// Output:
// For each testcase, output in a single line the first day during which chef answers less than k questions.



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
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll sum = 0;
	    bool flag = false;
	    ll ans = 0;
	    for(int i=0;i<n;i++){
	        sum+=a[i];
	        sum -= k;
	        
	        ans++;
	       // cout<<sum<<" "<<ans<<endl;
	        if(sum<0){
	            flag = true;
	           // ans = i+1;
	           //ans++;
	            break;
	        }
	    }
	    if(!flag){
	        ans += sum/k;
	       // if(sum%k!=0)
	        ans++;
	       // ans+=n;
	    }
	   // if(k>=a[0])
	   // ans--;
	    cout<<ans<<"\n";
	}
	return 0;
}
