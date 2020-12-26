/* Code Chef */
/* Title - Replace for X */
/* Created By - Akash Modak */
/* Date - 26/12/2020 */

// You are given an array of N integers A1,A2,…,AN and three more integers X,p, and k.

// An operation on the array is defined to be: replace the k-th smallest integer in the array with any integer you want.

// Output the minimum number of operations you must perform on the array (possibly 0 operations) to make the p-th smallest element of the array equal to X. If it is impossible to do so output −1.

// Note: the k-th smallest number in an array is the k-th number from the left when the array is sorted in non-decreasing order.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains four integers N,X,p,k respectively.
// The second line contains N space-separated integers A1,A2,…,AN.
// Output
// For each test case, print a single line containing one integer ― the minimum number of operations you must perform to make X the p-th smallest element or −1 if its impossible to do so.


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
	    ll n,x,p,k,res=0;
	    cin>>n>>x>>p>>k;
	    ll a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    if(a[p-1]==x)
	    cout<<0<<"\n";
	    else if(k>=p and a[p-1]>=x){
	        for(ll i=p-1;i>=0;i--){
	            if(a[i]>x)
	            res++;
	        }
	        cout<<res<<"\n";
	    }
	    else if(p>=k and a[p-1]<=x){
	        for(ll i=p-1;i<n;i++){
	            if(a[i]<x)
	            res++;
	        }
	        cout<<res<<"\n";
	    }
	    else 
	    cout<<"-1"<<"\n";
	}
	return 0;
}
