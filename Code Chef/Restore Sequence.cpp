/* Code Chef */
/* Title - Restore Sequence */
/* Created By - Akash Modak */
/* Date - 26/12/2020 */

// Alice has a very complex machine ― when fed with a sequence A1,A2,…,AN, it produces a sequence B1,B2,…,BN, where for each valid i, Bi is the largest index j such that Ai divides Aj (since Ai divides itself, such an index always exist). For example, if the machine is fed with A=[2,6,5,3,4], it produces B=[5,2,3,4,5].

// Alice gave you a sequence B that was produced by the machine. Find an integer sequence A such that when it is fed into the machine, then the machine produces the sequence B. Alice does not like huge integers, so make sure that 1≤Ai≤4⋅106 holds for each valid i.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// The second line contains N space-separated integers B1,B2,…,BN.
// Output
// For each test case, print a single line containing N space-separated integers A1,A2,…,AN. For each valid i, 1≤Ai≤4⋅106 should hold.

// If there are multiple solutions, you may print any of them. It is guaranteed that at least one solution exists.


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
	ll var = 5000005;
	bool arr[var+1];
	memset(arr,true,sizeof(arr));
	for(ll i = 2;i*i<=var;i++){
	    if(arr[i]){
	        for(ll j=i*i;j<=var;j+=i){
	            arr[j] = false;
	        }
	    }
	}
	
	int t;
	cin>>t;
	while(t--){
	    ll temp = 2;
	    ll var1;
	    cin>>var1;
	    ll arr1[var1];
	    for(ll i=0;i<var1;i++){
	        cin>>arr1[i];
	    }
	    unordered_map<ll,ll> m;
	    for(ll i=0;i<var1;i++){
	        if(m.find(arr1[i])==m.end()){
	            while(arr[temp]==false)
	            temp++;
	            m[arr1[i]]=temp;
	            temp++;
	        }
	    }
	    for(ll i=0;i<var1;i++){
	        cout<<m[arr1[i]]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
