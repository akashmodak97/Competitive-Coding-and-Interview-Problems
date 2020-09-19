/* Code Chef */
/* Title - Chefina and Swap */
/* Created By - Akash Modak */
/* Date - 19/09/2020 */

// You are given a positive integer N. Consider the sequence S=(1,2,…,N). You should choose two elements of this sequence and swap them.

// A swap is nice if there is an integer M (1≤M<N) such that the sum of the first M elements of the resulting sequence is equal to the sum of its last N−M elements. Find the number of nice swaps.

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

ll fun(ll a){
    long double x = sqrtl(1ul+4*a);
    x-=1.0;
    x/=2.0;
    return (ll)x;
    
}
int main() {
	// your code goes here
	fast;
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    if(n==1 || n==2)
	    cout<<0<<endl;
	    else{
	        
	        ll t = (n*(n+1))/2;
	        if(t%2){
	            cout<<0<<endl;
	            continue;
	        }
	        ll index = fun(t);
	        ll res = index*(index+1)/2;
	        if(t/2==res){
	            ll a = ((index*(index-1ul))/2l)+(((n-index)*(n-index-1ul))/2l)+(n-index);
	            cout<<a<<endl;
	        }
	        else
	        cout<<n-index<<endl;
	       // cout<<round(sqrt(n))<<endl;
	    }
	}
	return 0;
}
