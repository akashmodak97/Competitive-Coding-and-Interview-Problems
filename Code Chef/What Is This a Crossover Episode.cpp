/* Code Chef */
/* Title - What Is This, a Crossover Episode */
/* Created By - Akash Modak */
/* Date - 20/7/2020 */

// You are given an integer D. You have to find a string S such that the following conditions are satisfied:

// S is non-empty and its length does not exceed 7⋅D.
// S contains only lowercase English letters.
// The number of distinct substrings in S minus the number of palindromic substrings in S equals D. Here, when counting palindromic substrings, a substring that occurs multiple times should be counted multiple times.
// It can be proved that a solution always exists under the given constraints.

// Notes:

// A string B is a substring of a string A if B can be obtained from A by deleting several (possibly none or all) characters from the beginning and several (possibly none or all) characters from the end.
// A palindrome is a string that does not change when it is reversed. E.g. strings "z", "aba" and "dammitimmad" are palindromes, but strings "ab" and "bojack" are not.
// A palindromic substring is a substring which is also a palindrome.

#include <bits/stdc++.h>    
//#include <ext/pb_ds/assoc_container.hpp> 
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//using namespace __gnu_pbds; 
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb  push_back
#define show(x) cout<<(#x)<<" : "<<x<<endl;
#define ll  long long
#define ld  long double
#define fill(a,val) memset(a,val,sizeof(a))
#define mp  make_pair
#define ff  first
#define ss  second
#define pii pair<ll,ll>
#define sq(x) ((x)*(x))
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define endl "\n"
#define int long long 
#define printclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
const ll MOD     = 1000*1000*1000+7;
const ll INF     = 1ll*1000*1000*1000*1000*1000*1000 + 7;
const ll MOD2    = 998244353;
const ll N       = 1000 * 100 + 10;
const ll N2      = 70;
const ld PI  = 3.141592653589793;
//template<class T>using onset=tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll gcd(ll a, ll b){if(!b)return a;return gcd(b, a % b);} 
ll power(ll x,ll y,ll p = LLONG_MAX ){ll res=1;x%=p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}
ll lcm(ll a , ll b){return (a*b)/gcd(a,b);}
void solve(){
  #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
}
signed main()
{
    fastio();
    //cout<<fixed<<setprecision(20);
    //CHECK for LONG LONG and LONG DOUBLE
    //*comment for all except cc/cf   
    ll t; 
    cin>>t; 
    while(t--){
     ll d; 
     cin>>d; 
     cout<<2*d<<endl;
     for(ll i=1;i<=d;i++){
      cout<<'a';
     }   
     for(ll i=1;i<=d;i++){
      cout<<'z';
     }  
     cout<<endl; 
    }  
    //printclock;
    return 0;
}
    