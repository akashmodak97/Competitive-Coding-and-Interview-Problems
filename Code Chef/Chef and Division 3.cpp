/* Code Chef */
/* Title - Chef and Division 3 */
/* Created By - Akash Modak */
/* Date - 12/01/2021 */


// Chef wants to host some Division-3 contests. Chef has N setters who are busy creating new problems for him. The ith setter has made Ai problems where 1≤i≤N.

// A Division-3 contest should have exactly K problems. Chef wants to plan for the next D days using the problems that they have currently. But Chef cannot host more than one Division-3 contest in a day.

// Given these constraints, can you help Chef find the maximum number of Division-3 contests that can be hosted in these D days?

/* 
                       _oo0oo_ 
                      o8888888o 
                      88" . "88 
                      (| -_- |) 
                      0\  =  /0 
                    ___/`---'\___ 
                  .' \\|     |// '. 
                 / \\|||  :  |||// \ 
                / _||||| -:- |||||- \ 
               |   | \\\  -  /// |   | 
               | \_|  ''\---/''  |_/ | 
               \  .-\__  '-'  ___/-. / 
             ___'. .'  /--.--\  `. .'___ 
          ."" '<  `.___\_<|>_/___.' >' "". 
         | | :  `- \`.;`\ _ /`;.`/ - ` : | | 
         \  \ `_.   \_ __\ /__ _/   .-` /  / 
     =====`-.____`.___ \_____/___.-`___.-'===== 
                       `=---=' 
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  Akash Modak @akashmodak97  HITK Task @ Codechef/codeforces  
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


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
	int t;
	cin>>t;
	while(t--){
	    ll n,k,d;
	    cin>>n>>k>>d;
	    ll a,sum=0;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a;
	        sum+=a;
	    }
	    ll count = 0;
	   // while(a>0){
	        
	   // }
	   count = sum/k;
	   if(count>d){
	       cout<<d<<"\n";
	   }else{
	       cout<<count<<"\n";
	   }
	}
	return 0;
}
